# 0080 — Deduplicate

Remove duplicates from `1, 2, 2, 3, 1`, keeping the first occurrence of each in order, and print `1 2 3`. `unordered_set::insert` returns a pair whose `.second` is `true` on first insertion, so each new value is kept in order.

## Run

    make && ./dedup
