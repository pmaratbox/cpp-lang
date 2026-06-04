# 0220 — Null Object

Compare a no-op null logger with a real logger; only the real one records, so print the logged count `1`. Both share a `Logger` interface; `NullLogger::log()` is an empty override while the real one counts.

## Run

    make && ./nullobject
