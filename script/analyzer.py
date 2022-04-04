#!/usr/bin/python3

# version v1.1.5

from typing import Dict, List, Any, Callable, TypeVar

import argparse
from cmath import nan
import json
from os import listdir
import csv
import re
import statistics

from launcher import JSONSchema, SubJSONSchema

# I didn't think I'd look thaat ugly, but anyway
StatsType = Dict[str, Dict[str, List[float]]]
AggrStatsType = Dict[str, Dict[str, float]]
AgrFuncType = Callable[[List[float]], float]
CombFuncType = Callable[[float, float], float]
SheetType = List[List[Any]]
T = TypeVar("T")


def read_json(filepath: str) -> JSONSchema:
    with open(filepath, "r", encoding="utf-8") as file:
        return json.loads(file.read())


def load_report_jsons(dir: str) -> List[JSONSchema]:
    reports = [f for f in listdir(dir) if f.endswith(".json")]
    jsons: List[JSONSchema] = []
    for r in reports:
        filepath = f"{dir}/{r}"
        jsons.append(read_json(filepath))
    return jsons


def init_sample_stats() -> Dict[str, List[Any]]:
    sample_stats: Dict[str, List[Any]] = {
        "failed": [],
        # Source-based code coverage
        "source_based__branch_cov": [],
        "source_based__branches": [],
        "source_based__line_cov": [],
        "source_based__lines": [],
        # Gcov
        "gcov__coverage": [],
        "gcov__lines": [],
        # Klee logs
        "klee__errs": [],
        "klee__warns": [],
        "klee__paths": [],
        "klee__part_paths": [],
        "klee__tests": [],
        # Klee stats
        "klee__instrs": [],
        "klee__icov": [],
        "klee__bcov": [],
        "klee__icount": [],
        "klee__time": [],
        "klee__tsolver": [],
        "klee__mem_mb": [],
        "klee__mem_avg": [],
        "klee__mem_max": [],
        # KTest
        "ktests__total": [],
        "ktests__launched": [],
        "ktests__passed": [],
        "ktests__failed": [],
        "ktests__timeouted": [],
    }
    return sample_stats

def get_or_else(obj, path, dval: T) -> T:
    if len(path) == 0:
        return obj
    if type(obj) is not dict:
        return dval
    target = path[0]
    for key, value in obj.items():
        if re.match(target, key):
            return get_or_else(value, path[1:], dval)
    return dval


def append_sample_stat(collected: Dict[str, List[float]], raw: Dict[str, Any]) -> None:
    if "failed" in raw:
        for key in collected:
            collected[key].append(nan)
        collected["failed"][-1] = 1  # replace nan with 1
    else:
        collected["failed"].append(0)
        # Source-based code coverage
        collected["source_based__branch_cov"].append(
            get_or_else(raw, ["source_based_cov", "branches", "percent"], 0)
        )
        collected["source_based__branches"].append(
            get_or_else(raw, ["source_based_cov", "branches", "count"], 0)
        )
        collected["source_based__line_cov"].append(
            get_or_else(raw, ["source_based_cov", "lines", "percent"], 0)
        )
        collected["source_based__lines"].append(
            get_or_else(raw, ["source_based_cov", "lines", "count"], 0)
        )
        # Gcov
        collected["gcov__coverage"].append(get_or_else(raw, ["gcov", "coverage"], 0))
        collected["gcov__lines"].append(get_or_else(raw, ["gcov", "lines"], 0))
        # Klee logs
        collected["klee__errs"].append(len(get_or_else(raw, ["klee", "errors"], [])))
        collected["klee__warns"].append(len(get_or_else(raw, ["klee", "warnings"], [])))
        collected["klee__paths"].append(
            get_or_else(raw, ["klee", "done", "completed paths"], 0)
        )
        collected["klee__part_paths"].append(
            get_or_else(raw, ["klee", "done", "partially completed paths"], 0)
        )
        collected["klee__tests"].append(
            get_or_else(raw, ["klee", "done", "generated tests"], 0)
        )
        # Klee stats
        collected["klee__instrs"].append(
            get_or_else(raw, ["klee", "stats", "Instrs"], 0)
        )
        collected["klee__icov"].append(
            get_or_else(raw, ["klee", "stats", r"ICov\(%\)"], 0)
        )
        collected["klee__bcov"].append(
            get_or_else(raw, ["klee", "stats", r"BCov\(%\)"], 0)
        )
        collected["klee__icount"].append(
            get_or_else(raw, ["klee", "stats", "ICount"], 0)
        )
        collected["klee__time"].append(
            get_or_else(raw, ["klee", "stats", r"Time\(s\)"], 0)
        )
        collected["klee__tsolver"].append(
            get_or_else(raw, ["klee", "stats", r"TSolver\(%\)"], 0)
        )
        collected["klee__mem_mb"].append(
            get_or_else(raw, ["klee", "stats", r"[Mm]em\(?[Mm]i?[Bb]\)?"], 0)
        )
        collected["klee__mem_avg"].append(
            get_or_else(raw, ["klee", "stats", r"[Aa]vgMem.*"], 0)
        )
        collected["klee__mem_max"].append(
            get_or_else(raw, ["klee", "stats", r"[Mm]axMem.*"], 0)
        )
        # KTest
        collected["ktests__total"].append(get_or_else(raw, ["ktests", "total"], 0))
        collected["ktests__launched"].append(
            get_or_else(raw, ["ktests", "launched"], 0)
        )
        collected["ktests__passed"].append(get_or_else(raw, ["ktests", "passed"], 0))
        collected["ktests__failed"].append(get_or_else(raw, ["ktests", "failed"], 0))
        collected["ktests__timeouted"].append(
            get_or_else(raw, ["ktests", "timeouted"], 0)
        )


def collect_stats(jsons: List[JSONSchema]) -> StatsType:
    raw_stats: Dict[str, List[SubJSONSchema]] = {}
    meta: List[Dict[str, SubJSONSchema]] = []

    # Collect stats from different JSONs into single dictionary
    for j in jsons:
        runs = j["runs"]
        meta.append(j["meta"])
        for sample_name, sample_data in runs.items():
            raw_stats.setdefault(sample_name, []).append(sample_data)
    collected_stats: StatsType = {}
    for sample_name, sample_data in raw_stats.items():
        collected_sample_stats = init_sample_stats()
        for rsd in sample_data:
            append_sample_stat(collected_sample_stats, rsd)
        # Check for consistency
        check: Dict[str, int] = {}
        for key, val in collected_sample_stats.items():
            check[key] = len(val)
        assert len(set(check.values())) == 1, f"check failed: {check}"
        #
        collected_stats[sample_name] = collected_sample_stats

    # Check meta for consistency
    klee_args: set[str] = set()
    for m in meta:
        klee_args.add(" ".join(sorted(m["klee"]["args"].split(" "))))
    assert len(klee_args) == 1, f"inconsistent klee args: {klee_args}"

    # Ok
    return collected_stats


def aggregate_stats(
    collected_stats: StatsType, aggr_func: AgrFuncType
) -> AggrStatsType:
    aggr_stats: AggrStatsType = {}
    for filename in collected_stats:
        collected = collected_stats[filename].copy()
        # We wan't (a) to agregate info only for successful attempts
        # and (b) calculate
        total = len(collected["failed"])  # doesn't matter what col to use
        passed = [i for i, x in enumerate(collected["failed"]) if x == 0]
        aggr_ss: Dict[str, float] = {}
        collected.pop("failed")
        for rs in collected:
            filtered = [collected[rs][i] for i in passed]
            if len(filtered) == 0:
                aggr_ss[rs] = nan
            elif len(filtered) == 1:
                aggr_ss[rs] = filtered[0]
            else:
                aggr_ss[rs] = round(aggr_func(filtered), 2)
        fname = f"{filename} ({len(passed)}/{total})"
        aggr_stats[fname] = aggr_ss
    return aggr_stats


def convert_stats_to_sheet(stats: AggrStatsType, name: str) -> SheetType:
    samples = list(stats.keys())
    header = ["#"] + list(stats[samples[0]].keys())

    def merge_column_names(cols: List[str]):
        top: List[str] = []
        bottom: List[str] = []
        last_prefix = " "
        for x in cols:
            m = re.search(r"(.+)__(.*)", x)
            if m:
                prefix: str = m.group(1)
                tail: str = m.group(2)
                if prefix == last_prefix:
                    top.append(" ")
                else:
                    last_prefix = prefix
                    top.append(prefix)
                bottom.append(tail)
            else:
                top.append(x)
                bottom.append("#")
        return [top, bottom]

    sheet: SheetType = merge_column_names(header)
    for sname in samples:
        data = list(map(lambda x: f"{x}".replace(".", ","), stats[sname].values()))
        row = [sname] + data
        sheet.append(row)
    sheet[0][0] = name
    return sheet


def combine_stats(
    l: AggrStatsType, r: AggrStatsType, tap: CombFuncType
) -> AggrStatsType:
    assert set(l.keys()).difference(r.keys()) == set()
    x: AggrStatsType = {}
    for s in l.keys():
        ls = l[s]
        rs = r[s]
        xs: Dict[str, float] = {}
        for k in ls.keys():
            xs[k] = tap(ls[k], rs[k])
            pass
        x[s] = xs
    return x


def save_sheet_to_csv(sheet: SheetType, filepath: str) -> None:
    f = open(filepath, "w")
    writer = csv.writer(f)
    for row in sheet:
        writer.writerow(row)
    f.close()


def process(args: Any, name: str, stats: StatsType, f: AgrFuncType):
    sheet = convert_stats_to_sheet(aggregate_stats(stats, f), name)
    save_sheet_to_csv(
        sheet,
        f"{args.dir}/{name}.csv",
    )


def process_combine(
    args: Any,
    name: str,
    stats: StatsType,
    agrl: AgrFuncType,
    agrr: AgrFuncType,
    comb: CombFuncType,
):
    s1 = aggregate_stats(stats, agrl)
    s2 = aggregate_stats(stats, agrr)
    c = combine_stats(s1, s2, comb)
    sheet = convert_stats_to_sheet(c, name)
    save_sheet_to_csv(
        sheet,
        f"{args.dir}/{name}.csv",
    )


def main():
    arg_parser = argparse.ArgumentParser()
    arg_parser.add_argument(
        "--dir",
        help="directory where JSONs are located",
    )
    args = arg_parser.parse_args()
    jsons = load_report_jsons(args.dir)
    stats = collect_stats(jsons)
    process(args=args, name="mean", stats=stats, f=statistics.mean)
    process(args=args, name="stdev", stats=stats, f=statistics.stdev)
    process(args=args, name="max", stats=stats, f=max)
    process(args=args, name="min", stats=stats, f=min)
    process_combine(
        args=args,
        name="rsd",
        stats=stats,
        agrl=statistics.stdev,
        agrr=statistics.mean,
        comb=lambda x, y: round(x / y, 2) if y != 0 and type(y) is float else 0,
    )
    process_combine(
        args=args,
        name="min2max",
        stats=stats,
        agrl=min,
        agrr=max,
        comb=lambda x, y: round(x / y, 2) if y != 0 and type(y) is float else 0,
    )


if __name__ == "__main__":
    main()
