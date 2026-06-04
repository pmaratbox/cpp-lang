# 0115 — Dispatch Table

Store functions in a map keyed by name, then apply "add" and "mul" to (3,4), printing `7 12`. A `std::map<std::string, std::function<int(int,int)>>` lets us look up an operation by name and call it.

## Run

    make && ./table
