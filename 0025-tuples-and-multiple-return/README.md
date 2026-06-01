# 0025 — Tuples & Multiple Return

Return both the smaller and larger of `3` and `7` from one function, unpacking the pair to print `min: 3` and `max: 7`. `std::pair<int, int>` bundles the two values, and C++17 *structured bindings* `auto [lo, hi] = ...` unpack them by position. `std::tuple` generalizes this to any number of fields, and `std::tie` can unpack into existing variables.

## Run

    make && ./tuples
