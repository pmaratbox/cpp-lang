# 0196 — Error Wrapping

Wrap an inner error "inner" inside an outer context and print the combined message `outer: inner`. C++ catches the inner exception and re-throws a new one whose message prepends the outer context to `.what()`.

## Run

    make && ./wrapping
