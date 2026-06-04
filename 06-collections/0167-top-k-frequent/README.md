# 0167 — Top-K Frequent

Find the 2 most frequent elements of [a,b,a,c,b,a], printing `a b`. Count into a `std::map`, copy to a vector, then `std::stable_sort` by descending count to keep ties in key order.

## Run

    make && ./kfrequent
