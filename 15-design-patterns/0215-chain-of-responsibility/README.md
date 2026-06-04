# 0215 — Chain of Responsibility

Pass a request of level 2 along a handler chain so the level-2 handler handles it, printing `handled by 2`. Each handler holds a `next` pointer and forwards the request when it cannot handle it.

## Run

    make && ./chainofresponsibility
