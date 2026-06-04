# 0380 — Compare-And-Swap Loop

Increment a shared value to 100 using a CAS retry loop from multiple threads, printing `100`. A `compare_exchange_weak` retry loop guards each increment against lost updates.

## Run

    make && ./compareandswap
