# 0037 — Operator Overloading

Define how `+` (or an `add` method) combines two points, then add `(1, 2)` and `(3, 4)` and print `(4, 6)`. Defining `operator+` as a member (or free) function overloads `+` for `Point`. Most operators can be overloaded, and C++20 can synthesize comparisons from a single `operator<=>`.

## Run

    make && ./operators
