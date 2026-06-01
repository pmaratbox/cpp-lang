# 0053 — Binary Search

Binary-search the sorted array `1, 3, 5, 7, 9` for `7` and print the index where it is found: `found 7 at index 3`. `(lo + hi) / 2` truncates for `int`. The stdlib gives `std::binary_search` (a bool) and `std::lower_bound` (an iterator) for the position.

## Run

    make && ./binsearch
