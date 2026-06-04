# 0205 — Decorator

Decorate a base coffee (cost 2) with milk (+1) and sugar (+1), printing the total cost `4`. Each decorator holds a `unique_ptr<Coffee>` and adds to the wrapped `cost()`.

## Run

    make && ./decorator
