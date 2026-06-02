# 0022 — Concurrency

Start two tasks that produce `1` and `2`, let them run concurrently, then join their results and print `sum: 3`. `std::async(std::launch::async, ...)` runs each task on its own thread and hands back a `std::future`; calling `.get()` blocks until the result is ready. It is higher-level than `std::thread` because return values and exceptions propagate through the future. Linking needs `-pthread`.

## Run

    make && ./concurrency
