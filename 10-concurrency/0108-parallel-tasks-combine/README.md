# 0108 — Parallel Tasks Combined

Run two independent tasks that produce 10 and 20 concurrently, then combine (sum) their results into `30`. Two `std::async(std::launch::async, ...)` calls run the tasks in parallel and their futures' `.get()` values are summed.

## Run

    make && ./taskscombine
