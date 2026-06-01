# 0039 — Records & Value Equality

Create two points with the same fields, print one as `point: (1, 2)`, and compare them by value to print `equal: yes`. C++20 lets you `= default` the `operator==`, and the compiler synthesizes a member-wise comparison. Before C++20 you wrote the comparison by hand.

## Run

    make && ./records
