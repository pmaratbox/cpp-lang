# 0446 — Indexes

Creates an in-memory SQLite database with the SQLite C API (`<sqlite3.h>`), inserts three products, then runs `create index idx_sku on products(sku)` with `sqlite3_exec`. It prepares `select price from products where sku=?`, binds `'B'`, steps the result, and prints the matching price. Uses `sqlite3_open`, `sqlite3_prepare_v2`, `sqlite3_bind_text`, `sqlite3_step`, and `sqlite3_column_int`.

## Run

    make && ./indexes
