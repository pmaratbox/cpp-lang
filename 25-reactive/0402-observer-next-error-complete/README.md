# 0402 — Observer Contract

Demonstrate the observer contract next*-then-terminal: emit 1 and 2, complete, and show that a post-complete next is ignored. The observer wraps three std::function callbacks and guards them with a stopped flag set on the first terminal.

## Run

    make -s && ./observernexterrorcomplete
