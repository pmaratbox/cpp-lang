# 0445 — Transactions

Creates an in-memory SQLite table with the SQLite C API (`<sqlite3.h>`) and exercises real transaction control: one transaction inserts `1` and `2` then `COMMIT`s, while a second inserts `3` then `ROLLBACK`s. A final `select n from t order by n` shows only the committed rows (`1` and `2`), proving the rolled-back insert was discarded. Uses `sqlite3_exec` with `begin`/`commit`/`rollback`, `sqlite3_prepare_v2`, `sqlite3_step`, and `sqlite3_column_int`.

## Run

    make && ./transaction-commit-rollback
