# 0416 — Subject Multicast

Implement a Subject that multicasts each emission to all current observers; two observers both receive 1 then 2. The Subject holds a `std::vector<std::function<void(int)>>` and `next` iterates it, invoking each observer in subscription order.

## Run

    make -s && ./subjectmulticast
