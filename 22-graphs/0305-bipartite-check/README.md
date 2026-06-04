# 0305 — Bipartite Check

Check bipartiteness of a 4-cycle 0-1-2-3-0 (yes) and a triangle 0-1-2-0 (no), printing `yes no`. BFS 2-coloring with `color[v] = color[u] ^ 1` flips the partition and reports a conflict on any same-colored neighbor.

## Run

    make && ./bipartitecheck
