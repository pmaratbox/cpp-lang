# 0346 — Newtype Wrapper

Wrap raw integers in distinct UserId and ProductId types so they cannot be confused, printing `user-1 prod-2`. Two single-field structs act as C++ newtypes that the type system keeps incompatible.

## Run

    make && ./newtypewrapper
