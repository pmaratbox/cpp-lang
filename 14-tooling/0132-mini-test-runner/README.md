# 0132 — Mini Test Runner

Run three named test functions that all pass and report `3 passed, 0 failed`. A `std::vector` of `{name, std::function<bool()>}` pairs makes a compact, idiomatic registry to iterate and tally.

## Run

    make && ./testrunner
