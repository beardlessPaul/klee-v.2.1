# Changelog

## [v1.1.5] - 2022-03-17

### Fixed
- Type inference for context type in **launcher.py**

## [v1.1.4] - 2022-03-11

### Fixed
- Make analyzer agnostic to the unstable `klee-stats` API

## [v1.1.3] - 2022-03-03

### Added
- Source-based coverage information (branches, lines)

## [v1.1.2] - 2022-02-24

### Added
- Strict type annotations

### Fixed
- Redundant KeyboardInterrupt handling
- Overall code quality improvement

## [v1.1.1] - 2022-02-18

### Fixed
- Trying to collect coverage when all the launched ktests failed

## [v1.1.0] - 2022-02-09

### Added
- new "ktest_timeout" option in the config.json
- KLEE-memory and KLEE-done stats
- New min/max and rsd *.csv tables
- KLEE arguments consistency check
- Several helper scripts like `launch_and_analyze.sh` and `watchdog.sh`
- Static types, see: https://docs.python.org/3/library/typing.html

### Fixed
- Missing ktests do not raise redundant exceptions
- Hanging reproduce-me's are properly terminated after timeout
- Also ktests corresponding to partially completed paths are not launched

### Updated
- Improved aggregation - instead of nan we have success counter like "sample (ok/total)"
- Added more ktest stats like actually launched and timeouted counts
- Improved output CSV format - better column headers

## [v1.0.3] - 2022-02-04

### Added
- Extended output information with generated tests, completed paths and RAM usage (check ram.log)

## [v1.0.2] - 2022-01-31

### Added
- Let users use arrays for passing klee_args (as well as raw strings)
- Report ktest errors and other stats

### Fixed
- Handle and collect ktest errors properly

### Updated
- Minor refactoring of the launcher script
- Removed redundant loop over what's an eventually single gcda file
- README.md - note about config.json, some minor fixes as well
- Removed launch.sh script as it's redundant

## [v1.0.1] - 2022-01-20

Initial release

### Added
- launcher.py - runs a pipeline of tools (like KLEE, clang, llvm-cov etc.) in controlled manner and produce reports in a form of JSON files
- analyzer.py - extracts data from report JSONs produced by the launcher.py and calculates `mean`, `stdev` and other metrics
- config.json - example of a config file for the launcher.py script
- README.md - manuals on how to use and configure this sample benchmarking toolset
