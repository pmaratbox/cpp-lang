# 0447 — Batch insert

Creates an in-memory SQLite database with the SQLite C API (`<sqlite3.h>`), then inserts 1000 rows (values 1..1000) efficiently by preparing a single `insert into t values(?)` statement once and re-binding and stepping it inside one explicit transaction (`begin`/`commit`). It then runs `select count(*) from t` and prints the row count. Uses `sqlite3_prepare_v2`, `sqlite3_bind_int`, `sqlite3_step`, and `sqlite3_reset`.

## Run

    make && ./batch-insert
