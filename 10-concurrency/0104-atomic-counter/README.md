# 0104 — Atomic Counter

Increment a shared atomic counter from multiple threads 1000 times total without a lock, printing `1000`. `std::atomic<int>::fetch_add` makes each increment lock-free yet race-free across the 10 threads x 100.

## Run

    make && ./counter
