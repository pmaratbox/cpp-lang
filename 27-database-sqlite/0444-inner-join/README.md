# 0444 — Inner join

Creates `users` and `orders` tables in an in-memory SQLite database, inserts rows via prepared statements with bound parameters, then runs an `INNER JOIN` matching each order to its user on the foreign key and prints `name item` per row ordered by name then item. Uses the SQLite C API (`sqlite3.h`) directly from C++.

## Run

    make && ./inner-join
