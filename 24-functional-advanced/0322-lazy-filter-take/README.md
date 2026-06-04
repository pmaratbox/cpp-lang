# 0322 — Lazy Filter + Take

From a lazy stream of naturals, filter the even ones and take three, printing `2 4 6`. A pull-based loop draws from the generator, keeps only evens, and stops once three have been taken.

## Run

    make && ./lazyfiltertake
