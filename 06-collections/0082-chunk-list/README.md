# 0082 — Chunk a List

Split the list `1, 2, 3, 4, 5, 6, 7` into chunks of `3` and print each chunk on its own line: `1 2 3`, `4 5 6`, `7`. The outer loop advances by `size` and the inner loop, bounded by the vector size, prints each chunk (C++23 adds `std::views::chunk`).

## Run

    make && ./chunk
