# 0406 — Filter Operator

Implement a filter operator that forwards only values passing a predicate, keeping the even numbers of 1..6. A std::function wraps each observer's next/complete callbacks so filter just guards next with the predicate.

## Run

    make -s && ./filteroperator
