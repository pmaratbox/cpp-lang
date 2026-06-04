# 0171 — Doubly Linked List

Build a doubly linked list 1<->2<->3, traverse forward then backward, printing `1 2 3` then `3 2 1` on two lines. Each node owns its successor via `std::unique_ptr` while a raw `prev` pointer enables backward walking.

## Run

    make && ./linkedlist
