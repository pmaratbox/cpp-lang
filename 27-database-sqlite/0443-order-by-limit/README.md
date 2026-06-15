# 0443 — Order by & limit

Creates an in-memory SQLite database with the SQLite C API (`<sqlite3.h>`), inserts six integer scores via a prepared statement, then runs `select value from scores order by value desc limit 3` to sort the rows descending and take the top three. It prints each value on its own line. Uses `sqlite3_open`, `sqlite3_prepare_v2`, `sqlite3_bind_int`, `sqlite3_step`, and `sqlite3_column_int`.

## Run

    make && ./order-by-limit
