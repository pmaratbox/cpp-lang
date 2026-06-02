# 0063 — Flatten Nested List

Flatten the nested list `[[1, 2], [3, 4]]` into a single flat sequence and print its elements: `1 2 3 4`. `insert` appends each row's range to the result vector; C++20's `std::views::join` offers a lazy one-expression flatten.

## Run

    make && ./flatten
