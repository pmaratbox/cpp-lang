# 0439 — Parameterized query

Opens an in-memory SQLite database with the SQLite C API (`<sqlite3.h>`), creates a `users` table and inserts three rows, then runs `select name from users where id=?` binding the value `2` with `sqlite3_bind_int` rather than string concatenation. Stepping the prepared statement returns the matching name, which is printed. Demonstrates safe parameter binding via `sqlite3_prepare_v2`, `sqlite3_bind_int`, `sqlite3_bind_text`, and `sqlite3_column_text`.

## Run

    make && ./parameterized-query
