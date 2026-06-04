# 0297 — Dijkstra Shortest Paths

On the weighted digraph 0->1(4),0->2(1),2->1(2),1->3(1),2->3(5), print the shortest distances from node 0 `0 3 1 4`. A `std::priority_queue` with `std::greater<>` gives a min-heap for priority-driven relaxation.

## Run

    make && ./dijkstra
