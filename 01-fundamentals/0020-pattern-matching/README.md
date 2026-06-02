# 0020 — Pattern Matching

Match `n` against the literal patterns `1` and `2` with a wildcard fallback, mapping `1`, `2`, and `5` to `one`, `two`, and `many`. C++'s `switch` behaves like C's — integer/enum cases, fall-through without `break`, a `default` label. `std::string_view` returns a non-owning view of the string literals (which have static storage), avoiding any allocation. C++ has no language-level pattern matching.

## Run

    make && ./matching
