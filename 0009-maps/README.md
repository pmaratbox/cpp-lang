# 0009 — Maps

Build a `std::map<std::string, int>`, look up `"two"`, and print its value and
the map's size. `std::map` is an ordered (balanced-tree) map; `std::unordered_map`
is the hash-table variant. Note that `operator[]` inserts a default value for a
missing key — use `.at(key)` or `.find(key)` to avoid that. `.size()` counts
entries.

## Run

    make && ./maps
