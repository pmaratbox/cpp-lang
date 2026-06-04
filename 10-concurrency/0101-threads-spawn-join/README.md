# 0101 — Threads: Spawn and Join

Spawn 3 worker threads, wait for all of them to finish, then print `done: 3`. Each `std::thread` is stored in a vector and `join()`ed in turn, counting the joins.

## Run

    make && ./spawnjoin
