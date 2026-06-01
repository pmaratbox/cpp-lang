# 0052 — Queues

Enqueue `1`, `2`, and `3` into a queue, then dequeue them all and print them in first-in-first-out order: `1 2 3`. `std::queue` is a container adaptor (over `std::deque` by default): `push` enqueues, `front()` reads the head, and `pop()` removes it — note `pop()` returns nothing.

## Run

    make && ./queues
