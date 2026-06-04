# 0382 — Fork-Join Sum

Recursively fork the sum of [1..8] into halves and join the partial sums, printing `36`. Each recursive half runs in its own `std::async` and the results are joined via `get()`.

## Run

    make && ./forkjoinsum
