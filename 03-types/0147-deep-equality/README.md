# 0147 — Deep Equality

Compare two nested structures with equal contents for structural equality and print `equal: yes`. `std::pair`'s `operator==` recurses element-wise, so nested pairs compare deeply by value.

## Run

    make && ./equality
