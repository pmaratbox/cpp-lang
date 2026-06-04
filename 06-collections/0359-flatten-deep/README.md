# 0359 — Flatten Deeply

Flatten the arbitrarily nested structure [1,[2,[3,4]],5] into `1 2 3 4 5`. Model the nesting with a recursive std::variant of int or vector and recurse.

## Run

    make && ./flattendeep
