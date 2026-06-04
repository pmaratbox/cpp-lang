# 0194 — Try / Catch / Finally

Throw and catch an error, printing `caught`, and always run a finally block printing `cleanup`, on two lines. C++ has no `finally`, so an explicit cleanup block (or RAII destructor) runs after the `catch`.

## Run

    make && ./catchfinally
