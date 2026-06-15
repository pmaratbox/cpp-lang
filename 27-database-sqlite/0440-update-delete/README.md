# 0440 — Update & delete

Creates an in-memory SQLite database with the SQLite C API (`<sqlite3.h>`), inserts three users via a prepared statement, then runs an `update` to rename one row and a `delete` to remove another using `sqlite3_exec`. It finally selects the remaining rows ordered by `id` and prints each as `id name`. Uses `sqlite3_open`, `sqlite3_prepare_v2`, `sqlite3_bind_*`, `sqlite3_exec`, `sqlite3_step`, and `sqlite3_column_*`.

## Run

    make && ./update-delete
