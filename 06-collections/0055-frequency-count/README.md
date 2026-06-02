# 0055 — Frequency Count

Count how many times each letter appears in `banana` and print the per-letter counts in alphabetical order: `a:3 b:1 n:2`. `std::map<char, int>` is an ordered tree, so iterating it is alphabetical; `counts[ch]++` value-initializes a missing entry to `0` first.

## Run

    make && ./frequency
