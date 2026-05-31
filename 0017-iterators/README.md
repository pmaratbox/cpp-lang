# 0017 — Iterators

Take the numbers 1 through 5, keep the even ones, double each, and add them up — a filter, then a map, then a reduce — printing the final sum. C++20 ranges express the map and filter as composable, lazy *views* piped with `|`: `std::views::filter` then `std::views::transform`. The view computes nothing until iterated, so a range-`for` walks it once and accumulates the sum. (`std::ranges::fold_left` would replace the loop with a true reduce, but it is not yet in every standard library.)

## Run

    make && ./iterators
