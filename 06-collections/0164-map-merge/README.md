# 0164 — Merge Maps

Merge {a:1,b:2} and {b:3,c:4} with the right map winning on conflicts, printing `a:1 b:3 c:4`. Assigning into a `std::map` via `result[k] = v` overwrites on conflict and keeps entries sorted by key.

## Run

    make && ./merge
