# 0096 — Mutual Recursion

Using two mutually recursive functions `isEven` and `isOdd` (each calling the other), report whether `4` and `3` are even, printing `even` and `odd`. Like C, a forward declaration of `is_odd` is needed before `is_even` references it.

## Run

    make && ./mutual
