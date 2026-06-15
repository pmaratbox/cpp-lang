# 0442 — Group by

Builds a `sales(category, amount)` table in an in-memory SQLite database using the SQLite C API (`<sqlite3.h>`), inserts five rows with a prepared statement, then runs `select category, sum(amount) from sales group by category order by category` to aggregate the amounts per category. Each grouped row is printed as `category sum` (space-separated) via `sqlite3_step`, `sqlite3_column_text`, and `sqlite3_column_int`.

## Run

    make && ./group-by
