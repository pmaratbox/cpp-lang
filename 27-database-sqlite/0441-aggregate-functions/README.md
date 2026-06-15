# 0441 — Aggregate functions

Creates an in-memory SQLite database with the SQLite C API (`<sqlite3.h>`), inserts five integer amounts via a prepared statement, then runs a single `select count(*), sum(amount), min(amount), max(amount) from t` query to compute aggregates. It prints the four values, each on its own line, in that order. Uses `sqlite3_open`, `sqlite3_prepare_v2`, `sqlite3_bind_int`, `sqlite3_step`, and `sqlite3_column_int`.

## Run

    make && ./aggregate-functions
