# 0102 — Threads Returning Values

Run two threads that compute the squares of 3 and 4, join them, and print the sum of their results `25`. `std::async` returns a `std::future<int>`, and `.get()` blocks until each thread's result is ready.

## Run

    make && ./returnvalues
