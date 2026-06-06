# 0408 — Take Operator

Implement take(n) over an unbounded source of the natural numbers, emitting the first 3 then completing (and unsubscribing the source). A shared running flag flipped by the returned unsubscribe lambda lets the infinite producer loop stop synchronously.

## Run

    make -s && ./takeoperator
