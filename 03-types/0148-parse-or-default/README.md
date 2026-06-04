# 0148 — Parse or Default

Parse "42" to 42 and "x" (invalid) to a default 0, printing `42 0`. `std::from_chars` parses without exceptions, reporting failure through its returned `std::errc` so a fallback can be substituted.

## Run

    make && ./ordefault
