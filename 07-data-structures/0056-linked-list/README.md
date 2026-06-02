# 0056 — Linked List

Build a singly-linked list holding `1`, `2`, and `3`, then traverse it from head to tail and print `1 -> 2 -> 3`. Each node owns the next via `std::unique_ptr<Node>`, so the whole chain frees automatically when `head` is destroyed; raw `get()` pointers are used only to walk it.

## Run

    make && ./linkedlist
