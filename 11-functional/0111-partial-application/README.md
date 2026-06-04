# 0111 — Partial Application

Partially apply a two-argument add by fixing the first argument to 10, then call the result with 3 to print `13`. `std::bind_front` binds the leading argument and leaves a one-arg callable.

## Run

    make && ./application
