# 0105 — Channels / Message Passing

Send the values 1, 2, 3 through a channel (or queue) from one thread and receive them in order, printing `1 2 3`. A small closeable channel pairs a `std::queue` with a `std::mutex` and `std::condition_variable` so `recv()` blocks until a value arrives or the channel closes.

## Run

    make && ./messagepassing
