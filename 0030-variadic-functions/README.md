# 0030 — Variadic Functions

Define a function that accepts a variable number of integer arguments and returns their total, then call it with `1, 2, 3` to print `sum: 6`. A variadic *template* with a C++17 fold expression — `(nums + ... + 0)` — expands the parameter pack into `nums0 + nums1 + ... + 0` at compile time, fully type-checked. This is unrelated to C's runtime `<stdarg.h>` variadics.

## Run

    make && ./variadic
