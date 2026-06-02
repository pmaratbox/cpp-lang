# 0026 — Sets

Build a set from `1, 2, 2, 3` so the duplicate collapses, then print its `size: 3` and whether it contains `2` (`has 2: yes`) and `5` (`has 5: no`). `std::unordered_set<int>` is a hash set with average O(1) `insert`/`contains` (`.contains` since C++20); the duplicate `2` is ignored on construction. `.size()` counts membership. `std::set` is the ordered, tree-based variant.

## Run

    make && ./sets
