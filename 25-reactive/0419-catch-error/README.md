# 0419 — Catch Error

Implement catchError that, on an error from the source, switches to a fallback stream. The relay observer's error handler subscribes the original observer to the fallback via a std::function-based Observable.

## Run

    make -s && ./catcherror
