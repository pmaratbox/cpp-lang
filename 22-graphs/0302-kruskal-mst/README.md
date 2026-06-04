# 0302 — Kruskal MST

Compute the MST total weight of edges (0,1,1),(1,2,2),(0,2,3) with union-find, printing `3`. Storing edges as `(weight, u, v)` tuples lets `std::sort` order by weight directly, and a path-compressing find lambda backs the union-find.

## Run

    make && ./kruskalmst
