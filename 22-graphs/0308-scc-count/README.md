# 0308 — Strongly Connected Components

Count the strongly connected components of 0->1,1->2,2->0,2->3, printing `2`. Tarjan's algorithm tracks discovery `index` and `low` links on an explicit `std::stack` to pop one SCC each time `low[u] == index[u]`.

## Run

    make && ./scccount
