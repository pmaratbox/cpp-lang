# 0209 — Observer

Notify two observers of a new value 5; each prints its id and the value on its own line. The subject stores raw `Observer*` pointers and calls each `update()` on `notify()`.

## Run

    make && ./observer
