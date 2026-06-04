# 0324 — Either Monad

Chain Either computations: a successful divide chain yields 2, and a divide-by-zero yields an error, printing `2 err`. A `std::variant<std::string, int>` models Left/Right and bind short-circuits on the Left.

## Run

    make && ./eithermonad
