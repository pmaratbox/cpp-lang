# 0081 — Set Operations

Compute the union and intersection of the sets `{1, 2, 3}` and `{2, 3, 4}`, printing the union `1 2 3 4` and the common elements `2 3` (each in ascending order). `std::set` is ordered, so `std::set_union`/`std::set_intersection` merge the sorted ranges into the output via `back_inserter`.

## Run

    make && ./setops
