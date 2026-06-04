# 0397 — Log Level Filter

With a threshold of WARN, log messages at INFO, WARN, and ERROR but only emit WARN and ERROR, on two lines. An ordered enum lets a simple `>=` comparison gate which levels print.

## Run

    make && ./loglevels
