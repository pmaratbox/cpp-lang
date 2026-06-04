# 0112 — Predicate Combinators

Combine predicates with AND/OR/NOT: test `isEven AND isPositive` on 4 (yes) and -4 (no), printing `yes no`. The combinator takes two `std::function<bool(int)>` and returns a lambda that conjoins them.

## Run

    make && ./combinators
