# 0086 — Sort a Map by Value

Sort the map `{a: 3, b: 1, c: 2}` by value in ascending order and print the entries: `b:1 c:2 a:3`. The map's entries are copied into a vector of pairs and `std::sort`-ed by `.second` (the value).

## Run

    make && ./sortmap
