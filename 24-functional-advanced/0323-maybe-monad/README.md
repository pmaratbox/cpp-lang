# 0323 — Maybe Monad

Chain Maybe operations: Some(2) then +3 then *2 gives 10, and a None chain yields the fallback, printing `10 none`. A bind over `std::optional` applies the next step only when a value is present, propagating `nullopt` otherwise.

## Run

    make && ./maybemonad
