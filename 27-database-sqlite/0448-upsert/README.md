# 0448 — Upsert

This lesson uses the SQLite C API (`<sqlite3.h>`, linked with `-lsqlite3`) from C++ against an in-memory database. It creates an `inv(item text primary key, qty integer)` table seeded with `('apple', 5)`, then runs a prepared `insert ... on conflict(item) do update set qty = qty + excluded.qty` upsert for `('apple', 5)` (which updates the existing row to 10) and `('banana', 3)` (which inserts a new row). Finally it runs `select item, qty from inv order by item` and prints each row as `item qty`.

## Run

    make && ./upsert
