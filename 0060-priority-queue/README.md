# 0060 — Priority Queue

Push `3`, `1`, and `2` into a min-priority-queue, then pop them all and print them in priority (ascending) order: `1 2 3`. `std::priority_queue` is a MAX-heap by default; passing `std::greater<int>` as the comparator makes it a min-heap, so `top()` is the smallest.

## Run

    make && ./priorityqueue
