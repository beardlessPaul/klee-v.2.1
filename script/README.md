# About
It is a collection of tools that allows you to automatically launch samples and collects different stats.

## Version
v1.1.5

## Launcher
The `launcher.py` script is used to run a pipeline of tools (like KLEE, clang, llvm-cov etc.) in controlled manner 
and produce reports in a form of JSON files.

You can also use `launch_and_analyze.sh` to run the whole pipeline several times (adjust it for your needs).
Another useful tool is `watchdog.sh` which allows you to monitor launcher execution.

### Configure

> **Note: that you don't have to modify scripts to update configs**

Configuration file is a simple `JSON` that contains the following key-value pairs:
- `klee_args`: string (or string[]) containing cmd line arguments forwarded to klee
- `ktest_timeout`: tells the launched when to KILL hanging reproduce-me processes
- `benchmarks`: list of folders that store `.c` files in **benchmark** file format (see below)
- `klee_include`: path to KLEE include dir
- `klee_lib`: path to KLEE lib dir

> Options like "--posix-runtime" and "--libc=klee" are redundant and cause misleading icov calculation. 

```json
{
    "klee_args": [
        "--max-time=60s",
        "--search=dfs",
        "--watchdog"
    ],
    "ktest_timeout": 5,
    "benchmarks": [
        "samples_demo"
    ],
    "klee_include": "/.../klee/include/",
    "klee_lib": "/.../klee/build/lib/"
}
```

> Note: currenlty, "benchmarks" folder names should start with "samples" prefix and be placed in the same folder 
where the `launcher.py` script is located.

> Note: you can use "benchmarks" array to filter out files you are not interested in. Just create new folder, 
say samples_loops, put files you want to launch there and add "samples_loops" string to the "benchmark" array.

### Run

> Prerequisites: you need installed `python3`, and a `KLEE` build. You also need `llvm-cov` and `clang`. 
Also, KLEE should be in your PATH (as well as other tools of course).

Launching process is simple, just make sure all the precondtions are met and run the following cmd line:
```sh
python3 launcher.py --config $PWD/config.json
```

This script operates in the `workdir` (which it automatically creates). For each `benchmark` a separate 
folder inside the `workdir` is created (forming smth like `workdir/{benchmark}`).
Logs are stored in `errors.log` files in the root dir as well as the `workdir`, which makes it easy 
to perform diagnostics of errors on every stage.

**Results** are stored inside `workdir/{benchmark}` folder in a JSON file called `{benchmark}_report_{n}.json`, 
where n is the number of the launch (1,2,...n).
An example of the output JSON is below:
```JSON
{
    "loop_1_1.c": {
        "klee": {
            "errors": [],
            "warnings": [
                "KLEE: WARNING ONCE: Alignment of memory from call \"malloc\" is not modelled. Using alignment of 8.",
                "KLEE: WARNING ONCE: calling external: syscall(4, 94861871202560, 94861870783376) at runtime/POSIX/fd.c:544 12",
                "KLEE: WARNING ONCE: calling __klee_posix_wrapped_main with extra arguments."
            ],
            "stats": {
                "Instrs": 19479.0,
                "Time(s)": 9.96,
                "ICov(%)": 12.02,
                "BCov(%)": 7.36,
                "ICount": 5416.0,
                "TSolver(%)": 66.62
            }
        },
        "gcov": {
            "coverage": 26.09,
            "lines": 23
        }
    }
}
```

### Benchmark file format

Benchmark file is a self-contained `.c` file with no dependencies other than "klee/klee.h".
It should contain the `main` function which represents a `test driver`.
It should also contain a target function called from main.
The test driver should allocate memory for the objects passed to the target function.
It should also symbolize memory addresses using `klee_make_symbolic` and use other functions like `klee_assume` to put additional constraints.
No `klee_`-prefixed functions should be called outside of the main function (aka test driver).

Example of a good driver is below (taken from the official KLEE page eventually):

```c
// The only include is klee.h
#include "klee/klee.h"

// The target function
int get_sign(int x)
{
    if (x == 0)
        return 0;

    if (x < 0)
        return -1;
    else
        return 1;
}

// Test driver, i.e. the main() function
int main()
{
    int a;
    klee_make_symbolic(&a, sizeof(a), "a");
    return get_sign(a);
}
```

## Analyzer

Extracts data from report JSONs produced by the launcher.py and calculates `mean`, `stdev` and other metrics.

### Run
Simply run it like this:

```sh
python3 analyzer.py --dir $PWD/...
```

### Output format

Output format is `csv`. A number of files will be created in the `--dir` directory: `mean.csv`, `stdev.csv` and so on. 
These files can be easily imported to `Excel` for further processing (open `Data` tab and click the `From Text/CSV` button).
