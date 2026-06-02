# 0049 — Zip & Enumerate

Pair the letters `a, b, c` with the numbers `1, 2, 3` position by position, formatting each pair as `key=value` and printing `a=1 b=2 c=3`. An index loop walks both vectors in parallel (the lengths must match). C++23 adds `std::views::zip` for a real zipped range, and `std::views::enumerate` for indices.

## Run

    make && ./zip
