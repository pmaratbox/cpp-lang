# 0107 — Worker Pool

Distribute squaring of 1..4 across a pool of workers, collect the results, and print them sorted ascending `1 4 9 16`. Workers pull jobs from a shared index under a mutex, push squares into a results vector, and `std::sort` makes the output deterministic.

## Run

    make && ./pool
