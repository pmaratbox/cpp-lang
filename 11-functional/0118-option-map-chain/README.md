# 0118 — Option Map Chaining

Map a function over a present optional (10 -> 12) and an absent one (-> fallback), printing `12 none`. `std::optional::transform` applies the function only when a value is present, leaving `nullopt` untouched.

## Run

    make && ./mapchain
