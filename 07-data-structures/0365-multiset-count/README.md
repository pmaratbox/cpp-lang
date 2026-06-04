# 0365 — Multiset Counts

Add 1,1,2 to a multiset; print the count of 1 (2), remove one 1, then print the count of 1 (1), as `2 1`. An std::map from element to count tracks multiplicities, erasing keys that reach zero.

## Run

    make && ./multisetcount
