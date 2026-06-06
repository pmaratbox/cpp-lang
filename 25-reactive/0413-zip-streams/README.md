# 0413 — Zip Streams

Implement zip that pairs values by index and combines them; zip [1,2,3] with [10,20,30] using a+b. Per-source `std::deque` buffers drain in lockstep, emitting `combine(x, y)` whenever both queues hold a value.

## Run

    make -s && ./zipstreams
