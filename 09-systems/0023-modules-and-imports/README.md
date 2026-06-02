# 0023 — Modules & Imports

Define `square(n)` in a separate `mathutil` module and import it from the main program, printing `square(8) = 64` across the module boundary. Like C, this splits a declaration in `mathutil.hpp` from its definition in `mathutil.cpp`, linked together by the Makefile. C++20 added a true `module` system, but the header/source split with an include guard remains the most portable across toolchains.

## Run

    make && ./modules
