#!/usr/bin/python3

# version v1.1.5

import argparse
import codecs
import copy
import datetime
import json
import os
import re
import subprocess
import shutil

from os import listdir
from os.path import join
import traceback
from typing import Callable, Dict, List, Any, Optional, Set, Tuple, Union, TypeVar

SubJSONSchema = Dict[str, Any]
JSONSchema = Dict[str, Dict[str, SubJSONSchema]]
KleeStatsType = Dict[str, float]


class LauncherContext:
    def __init__(self, args: argparse.Namespace):
        self.pwd: str = os.getcwd()
        self.workdir = join(self.pwd, "workdir")
        if not os.path.exists(self.workdir):
            os.mkdir(self.workdir)
        # NOTE: use config.json to setup klee args
        self.klee_args: str = "--posix-runtime --libc=klee --max-time=10s --timer-interval=2s --watchdog"
        self.benchmarks = ["samples"]
        self.ktest_timeout = 5
        self.klee_include: str = args.klee_include or ""
        self.klee_lib: str = args.klee_lib or ""
        assert args.config != ""
        cfg = read_json(args.config)
        self.update(cfg)
        # Let users use arrays for passing klee_args
        if type(self.klee_args) is list:
            self.klee_args = " ".join(self.klee_args)
        assert self.klee_include, "Please specify klee_include path"
        assert self.klee_lib, "Please specify klee_lib path"

    def copy(self) -> 'LauncherContext':
        return copy.deepcopy(self)

    def update(self, cfg: SubJSONSchema):
        for key, value in cfg.items():
            assert key in self.__dict__, "config.json must properly initialize context"

            assert (
                type(value) == type(self.__dict__[key]) or
                key == "klee_args" and type(value) is list
            ), "config.json must have correctly typed values"
            self.__dict__[key] = value


def dump_stderr(ctx: LauncherContext, raw: Union[str, bytes]):
    f = join(ctx.workdir, "errors.log")
    if os.path.exists(f) and not os.path.isfile(f):
        raise Exception(f"Not a suitable file: {f}")
    mode = "a" if os.path.exists(f) else "w"
    decoded = (
        codecs.decode(raw, "utf-8") if type(raw) is bytes else str(raw)
    )
    now = str(datetime.datetime.now(datetime.timezone.utc)).split(".")[0]
    MAX_DECODED_LEN = 500
    decoded = (decoded[:MAX_DECODED_LEN]
                + "...") if len(decoded) > MAX_DECODED_LEN else decoded
    formatted = f"{now} {decoded}\n"
    with open(f, mode, encoding="utf-8") as file:
        print(formatted)
        file.write(formatted)


def read_json(file_path: str) -> SubJSONSchema:
    with open(file_path, "r", encoding="utf-8") as file:
        return json.loads(file.read())


def write_json(file_path: str, data: JSONSchema) -> int:
    with open(file_path, "w", encoding="utf-8") as file:
        return file.write(json.dumps(data, indent=2))


def read_list(data: str) -> List[str]:
    res = map(lambda x: x.strip(), data.splitlines())
    return list(filter(lambda x: x != "", res))


TapResT = TypeVar("TapResT")
def eq_list_to_dict(xs: List[str], tap: Callable[[str], TapResT]) -> Dict[str, TapResT]:
    res: Dict[str, TapResT] = {}
    for x in xs:
        match = re.search(r"([^=]+)=([^=]+)", x)
        if match:
            k = match.group(1).strip()
            v = match.group(2).strip()
            res[k] = tap(v)
    return res


class TimeoutRetriedException(Exception):
    pass


def launch(
    ctx: LauncherContext,
    cmd: List[str],
    env: Optional[Dict[str, str]] = None,
    timeout: Optional[float] = None,
    throw_on_nonzero: bool = False,
) -> Tuple[bytes, ...]:
    pid: Optional[int] = None
    complain: Callable[[str], None] = lambda msg: dump_stderr(
                                                    ctx, 
                                                    f"[PID={pid}] {msg}")
    with subprocess.Popen(
        cmd,
        stdout=subprocess.PIPE,
        env=env,
        stderr=subprocess.PIPE,
        cwd=ctx.workdir
    ) as process:
        pid = process.pid
        try:
            complain(f">>> {' '.join(cmd)}")
            out, err = process.communicate(timeout=timeout)
            info = codecs.decode(err, encoding="utf-8")
            if process.returncode == 0:
                complain(f"exited normally ({info})")
            else:
                complain(f"exited with non-zero code ({info})")
                if throw_on_nonzero:
                    raise Exception(f"Process exited with non-zero code")
            return tuple([out, err])
        except subprocess.TimeoutExpired:
            retry = 0
            max_retries = 10
            while retry <= max_retries:
                try:
                    complain(f"{timeout}s timeout expired, killing")
                    process.kill()
                    process.communicate(timeout=timeout)
                except subprocess.TimeoutExpired:
                    complain(f"retry {retry}-th time!")
                    continue
                else:
                    break
                finally:
                    retry += 1
            complain(f"killed after {retry} retires")
            raise TimeoutRetriedException("Process killed after timeout")
        except subprocess.CalledProcessError:
            complain("couldn't launch the process")
            raise Exception("couldn't launch the process")


def collect_samples(ctx: LauncherContext, benchmark: str) -> Dict[str, str]:
    pwd = ctx.pwd
    samples_dir = join(pwd, benchmark)
    samples = [f for f in listdir(samples_dir) if f.endswith(".c")]
    sample_map = {s: join(samples_dir, s) for s in samples}
    samples_list = "\n - ".join(samples)
    dump_stderr(ctx, f"# Collected samples from '{samples_dir}': \n - {samples_list}")
    return sample_map


def collect_klee_stats(ctx: LauncherContext) -> KleeStatsType:
    dump_stderr(ctx, "# Collecting KLEE stats")

    def read_line(line: str) -> List[str]:
        res = list(filter(lambda x: x != "", map(lambda x: x.strip(), line.split("|"))))
        return res[1:]  # don't want to take Path

    klee_last_dir = join(ctx.workdir, "klee-last")
    if not os.path.isdir(klee_last_dir):
        raise Exception("No klee-last dir found")
    stats_cmd = [
        "klee-stats",
        "--print-all",
        klee_last_dir,
    ]
    [out, _] = launch(
        ctx,
        stats_cmd,
    )
    lines = read_list(codecs.decode(out, encoding="utf-8"))
    keys = read_line(lines[1])
    vals = map(lambda x: float(x), read_line(lines[3]))
    stats = dict(zip(keys, vals))
    return stats


def build_and_link(
    ctx: LauncherContext,
    path: str,
    compiler: str,
    linker: str,
    build_out: str,
    link_out: str,
    build_opts: List[str],
    link_opts: List[str]
):
    w = ctx.workdir
    klee_include = ctx.klee_include
    build_analyze_me = [
        compiler,
        "-g",
        "-c",
        f"-I{klee_include}",
        "-o",
        join(w, build_out),
        path,
        *build_opts
    ]

    launch(ctx, build_analyze_me)
    link_analyze_me = [
        linker,
        join(w, build_out),
        "-o",
        join(w, link_out),
        *link_opts
    ]
    launch(ctx, link_analyze_me)

def build_targets(ctx: LauncherContext, name: str, path: str) -> None:
    dump_stderr(ctx, "# Building symbolic and concrete targets")
    w = ctx.workdir
    klee_lib = ctx.klee_lib

    # Copy the source and update the path
    new_path = join(w, name)
    shutil.copy(path, new_path)
    path = new_path

    # Build and link targets
    build_and_link(
        ctx,
        path,
        compiler="clang",
        linker="llvm-link",
        build_out=f"{name}.o.bc",
        link_out="analyze-me.bc",
        build_opts=["-emit-llvm"],
        link_opts=[]
    )

    build_and_link(
        ctx,
        path,
        compiler="clang",
        linker="clang",
        build_out=f"{name}.o",
        link_out="reproduce-me",
        build_opts=["--coverage"],
        link_opts=[
            "-L",
            klee_lib,
            "-lkleeRuntest",
            "--coverage"
        ]
    )

    build_and_link(
        ctx,
        path,
        compiler="clang",
        linker="clang",
        build_out=f"{name}-sbcov.o",
        link_out="reproduce-me-sbcov",
        build_opts=[
            "-fprofile-instr-generate",
            "-fcoverage-mapping",
        ],
        link_opts=[
            "-L",
            klee_lib,
            "-lkleeRuntest",
            "-fprofile-instr-generate",
            "-fcoverage-mapping",
        ]
    )


def extract_from_errlist(prefix: str,
                         errlist: List[str],
                         unique: bool=False) -> List[str]:
    iter = map(
        lambda x: x.lstrip(prefix),
        filter(lambda x: x.startswith(prefix), errlist),
    )
    if unique:
        return list(set(iter))
    return list(iter)


def launch_klee(ctx: LauncherContext) -> SubJSONSchema:
    dump_stderr(ctx, "# Launching KLEE")
    # Launch KLEE
    klee_run = [
        "klee",
        *ctx.klee_args.split(" "),
        join(ctx.workdir, "analyze-me.bc")
    ]
    [_, err] = launch(ctx, klee_run)

    # Collect errors and stats
    errlist = codecs.decode(err, encoding="utf-8").split("\n")
    klee_done = eq_list_to_dict(extract_from_errlist("KLEE: done: ", errlist), int)
    klee_warnings = extract_from_errlist("KLEE: WARNING", errlist, unique=True)
    klee_errors = extract_from_errlist("KLEE: ERROR", errlist, unique=True)

    # Report KLEE stats and so on
    return {
        "klee": {
            "errors": klee_errors,  # unique errors
            "warnings": klee_warnings,  # unique warning
            "done": klee_done,  # from map result
            "stats": collect_klee_stats(ctx),
        },
    }

def reproduce_source_based_cov_and_merge_data(ctx: LauncherContext, kenv: Dict[str, str]):
    w = ctx.workdir
    klee_last_dir = join(w, "klee-last")
    profraw_name = join(klee_last_dir, "reproduce-me.profraw")
    profdata_name = join(klee_last_dir, "reproduce-me.profdata")
    kenv["LLVM_PROFILE_FILE"] = profraw_name
    launch(
        ctx,
        [join(w, "reproduce-me-sbcov")],
        env=kenv,
        timeout=ctx.ktest_timeout,
        throw_on_nonzero=True,
    )
    # Merging info from this ktest pass into common file
    cmd = [
        "llvm-profdata",
        "merge",
        "-sparse",
        profraw_name
    ]
    if os.path.exists(profdata_name):
        cmd.append(profdata_name)
    cmd.append("-o")
    cmd.append(profdata_name)
    launch(
        ctx,
        cmd,
        env=kenv,
        throw_on_nonzero=True,
    )


def collect_gcov(ctx: LauncherContext, name: str) -> Optional[Tuple[float, int]]:
    w = ctx.workdir
    gcda = join(w, f"{name}.gcda")
    [out, _] = launch(ctx, ["llvm-cov", "gcov", gcda])
    os.remove(gcda)
    gcov_info = read_list(codecs.decode(out, encoding="utf-8"))
    if len(gcov_info) == 0:
        raise Exception("No coverage information (broken .gcda files?)")
    idx = [
        i for i, s in enumerate(gcov_info) if s.startswith("Lines executed")
    ][0]
    match = re.search(r"Lines executed:(\d+\.?\d*)% of (\d+)", gcov_info[idx])
    if match:
        return float(match.group(1)), int(match.group(2))
    return None


def collect_source_based_cov(ctx: LauncherContext) -> Dict[str, Dict[str, Union[int, float]]]:
    w = ctx.workdir
    klee_last_dir = join(w, "klee-last")
    profdata_name = join(klee_last_dir, "reproduce-me.profdata")
    [out, _] = launch(
        ctx,
        [
            "llvm-cov",
            "export",
            join(w, "reproduce-me-sbcov"),
            f"-instr-profile={profdata_name}"
        ],
        timeout=ctx.ktest_timeout,
        throw_on_nonzero=True,
    )
    sbcov = json.loads(out)["data"][0]["totals"]
    for metrics in sbcov:
        sbcov[metrics]["percent"] = float(sbcov[metrics]["percent"])
    return sbcov


def reproduce(ctx: LauncherContext, name: str) -> SubJSONSchema:
    dump_stderr(ctx, "# Reproducing results")
    w = ctx.workdir
    # Reproduce results
    klee_last_dir = join(w, "klee-last")
    ktests_total = [f for f in listdir(klee_last_dir) if f.endswith(".ktest")]
    kearly = [f for f in listdir(klee_last_dir) if f.endswith(".early")]
    remove_ext: Callable[[str], str] = lambda x: x.split(".")[0]
    kdiff = set(map(remove_ext, ktests_total)).difference(map(remove_ext, kearly))
    ktests = list(map(lambda x: f"{x}.ktest", kdiff))
    ktest_errors: set[str] = set()
    ktest_timeouted = 0
    ktests_launched = 0
    ktests_failed = 0
    ktests_passed = 0
    gcov_coverage = 0
    gcov_lines = 0
    sbcov: Dict[str, Dict[str, Union[int, float]]] = {
        "branches": {
            "count": 0,
            "percent": 0
        },
        "lines": {
            "count": 0,
            "percent": 0
        }
    }
    dump_stderr(
        ctx, f"Found {len(ktests_total)} ktests, {len(kearly)} of them are partial"
    )
    if len(ktests) != 0:
        klee_lib = ctx.klee_lib
        for t in ktests:
            kenv = os.environ.copy()
            kenv["LD_PRELOAD"] = join(klee_lib, "libkleeRuntest.so")
            kenv["KTEST_FILE"] = join(klee_last_dir, t)
            try:
                launch(
                    ctx,
                    [join(w, "reproduce-me")],
                    env=kenv,
                    timeout=ctx.ktest_timeout,
                    throw_on_nonzero=True,
                )
                reproduce_source_based_cov_and_merge_data(ctx, kenv)
            except TimeoutRetriedException as err:
                ktest_errors.add(str(err))
                ktest_timeouted += 1
            except Exception as err:
                ktest_errors.add(str(err))
                ktests_failed += 1
            else:
                ktests_passed += 1
            finally:
                ktests_launched += 1

        dump_stderr(ctx, f"Note: {ktests_passed} of {ktests_launched} ktests passed")
        if ktests_passed > 0:
            gcov_info = collect_gcov(ctx, name)
            if gcov_info:
                gcov_coverage, gcov_lines = gcov_info

            sbcov = collect_source_based_cov(ctx)
    else:
        dump_stderr(ctx, f"No complete ktests found")
    # Report ktest stats
    return {
        "ktests": {
            "total": len(ktests_total),
            "launched": ktests_launched,
            "passed": ktests_passed,
            "failed": ktests_failed,
            "timeouted": ktest_timeouted,
            "errors": list(ktest_errors),
        },
        "gcov": {
            "coverage": gcov_coverage,
            "lines": gcov_lines,
        },
        "source_based_cov": sbcov
    }


def run_pass(ctx: LauncherContext, name: str, path: str) -> Dict[str, SubJSONSchema]:
    dump_stderr(ctx, f"# Evaluating sample '{name}', located here: '{path}'")
    res: Dict[str, SubJSONSchema] = {}
    try:
        ctx.workdir = join(ctx.workdir, name.split(".")[0])
        if not os.path.exists(ctx.workdir):
            os.mkdir(ctx.workdir)
        build_targets(ctx, name, path)
        res = {**res, **launch_klee(ctx)}
        res = {**res, **reproduce(ctx, name)}
    except Exception as err:
        dump_stderr(ctx, f"{err}: {traceback.format_exc()}")
        res["failed"] = {"details": f"{err}: {traceback.format_exc()}"}
    finally:
        return res


def run_benchmark(ctx: LauncherContext, benchmark: str) -> None:
    dump_stderr(ctx, f"# Entering benchmark '{benchmark}'")
    samples_map = collect_samples(ctx, benchmark)
    runs: JSONSchema = {}
    for s in samples_map:
        res = run_pass(ctx.copy(), s, samples_map[s])
        runs[s] = res
    existing_reports = [f for f in listdir(ctx.workdir) if f.endswith(".json")]
    report_count = len(existing_reports) + 1
    write_json(
        join(ctx.workdir, f"{benchmark}_report_{report_count}.json"),
        {"runs": runs, "meta": {"klee": {"args": ctx.klee_args}}},
    )
    dump_stderr(ctx, f"# Leaving benchmark '{benchmark}'")


def ensure_tools(ctx: LauncherContext, tools: List[Tuple[str, str]]) -> None:
    absent: Set[str] = set()
    for package, tool in tools:
        out, _ = launch(ctx, ["which", tool])
        if not out.decode("utf-8"):
            absent.add(package)

    if absent:
        s = "s" if len(absent) > 1 else ""
        dump_stderr(ctx, f"Package{s} {', '.join(absent)} not installed! "
                         "Cannot collect source-based code coverage, quitting...")
        raise RuntimeError(f"Missing {', '.join(absent)} package{s}")


def main():
    arg_parser = argparse.ArgumentParser()
    arg_parser.add_argument(
        "--config",
        help="configuration JSON file",
    )
    arg_parser.add_argument("--klee_include", help="path to KLEE include dir")
    arg_parser.add_argument("--klee_lib", help="path to KLEE lib dir")
    args = arg_parser.parse_args()
    pure_context = LauncherContext(args)
    ensure_tools(
        ctx=pure_context,
        tools=[
            ("clang", "clang"),
            ("llvm", "llvm-profdata"),
            ("llvm", "llvm-cov")
        ]
    )
    dump_stderr(pure_context, "# Launcher started")
    for bench in pure_context.benchmarks:
        ctx = pure_context.copy()
        benchdir_path = join(ctx.workdir, bench)
        if not os.path.exists(benchdir_path):
            os.mkdir(benchdir_path)
        ctx.workdir = benchdir_path
        run_benchmark(ctx, bench)
    dump_stderr(pure_context, "# Launcher finished")


if __name__ == "__main__":
    main()
