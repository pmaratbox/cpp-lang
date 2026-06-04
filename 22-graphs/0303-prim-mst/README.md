# 0303 — Prim MST

Compute the MST total weight of the chain (0,1,1),(1,2,2),(2,3,3) with Prim, printing `6`. A min-`std::priority_queue` of `(weight, node)` pairs always pops the cheapest crossing edge to grow the tree.

## Run

    make && ./primmst
