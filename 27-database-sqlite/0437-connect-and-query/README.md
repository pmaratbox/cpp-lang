# 0437 — Connect & query

Opens an in-memory SQLite database with the SQLite C API (`<sqlite3.h>`), prepares the statement `select 42`, steps through the single result row, and prints the integer column value. Uses `sqlite3_open`, `sqlite3_prepare_v2`, `sqlite3_step`, and `sqlite3_column_int`.

## Run

    make && ./connect-and-query
