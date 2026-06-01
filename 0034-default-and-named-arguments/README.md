# 0034 — Default & Named Arguments

Give a `greet` function a default greeting, then call it once without the greeting and once overriding it, printing `Hello, Ada` and `Hi, Ada`. C++ supports trailing *default arguments* (`const std::string& greeting = "Hello"`), evaluated at the call site when omitted. It has no named arguments, though designated initializers on a struct parameter can emulate them (C++20).

## Run

    make && ./defaults
