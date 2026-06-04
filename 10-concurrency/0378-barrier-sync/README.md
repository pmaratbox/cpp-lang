# 0378 — Barrier Synchronization

Have 3 threads each arrive at a barrier before any proceeds, then print `all reached: 3`. In C++ a `std::barrier` with a completion callback prints once all threads arrive.

## Run

    make && ./barriersync
