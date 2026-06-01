# 0024 — Sorting & Comparators

Sort `[3, 1, 2]` ascending, then again with a custom comparator that reverses the order, printing `asc: 1 2 3` and `desc: 3 2 1`. `std::sort` orders a range in place in O(n log n); the third argument is the comparator, defaulting to `<`. `std::greater<>()` (a transparent functor) reverses it, as a lambda `[](int a, int b){ return a > b; }` would too.

## Run

    make && ./sorting
