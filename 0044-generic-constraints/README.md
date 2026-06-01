# 0044 — Generic Constraints

Write a generic `largest(a, b)` that requires an ordered type, then call it on integers (3 and 9) and on strings (apple and pear), printing `9` and `pear`. A template is duck-typed — `a > b` is checked only when instantiated — so the C++20 concept `std::totally_ordered` states the requirement explicitly and gives clearer errors when it is unmet.

## Run

    make && ./generics
