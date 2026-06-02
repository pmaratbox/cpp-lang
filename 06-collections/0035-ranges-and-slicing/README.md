# 0035 — Ranges & Slicing

From the list `[10, 20, 30, 40, 50]`, take the sub-sequence at indices 1 through 4 (exclusive) and print `slice: 20 30 40`. Standard containers slice via *iterators*: `begin() + 1` to `begin() + 4` denote the half-open range. C++20's `std::span` packages a pointer-plus-length view, and `std::ranges` offers `views::drop`/`take`.

## Run

    make && ./ranges
