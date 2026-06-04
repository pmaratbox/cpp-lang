# 0307 — A* on a Grid

Find the shortest path length from (0,0) to (2,2) on an obstacle-free 3x3 grid (4-directional) with the Manhattan heuristic, printing `4`. A min-`std::priority_queue` ordered by `f = g + h` (Manhattan) expands cells in A* order until the goal pops.

## Run

    make && ./astargrid
