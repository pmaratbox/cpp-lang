# 0103 — Mutex-Protected Counter

Have multiple threads each increment a shared counter under a mutex so the total is exactly `1000`. A `std::lock_guard<std::mutex>` locks around each `++counter` so the 10 threads x 100 increments never race.

## Run

    make && ./sharedcounter
