# 0409 — Distinct Until Changed

Implement distinctUntilChanged, dropping consecutive duplicate values from 1,1,2,2,2,3,1. A std::optional tracks the last emitted value and the operator forwards only when the incoming value differs.

## Run

    make -s && ./distinctuntilchanged
