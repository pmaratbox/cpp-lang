# 0381 — Parallel Map

Square 1,2,3,4 in parallel and collect the results in input order, printing `1 4 9 16`. Each element gets its own `std::async`, then futures are joined in index order.

## Run

    make && ./parallelmap
