# 0233 — Expression AST

Build an AST for "1+2*3" and evaluate it to `7`. We model nodes as a polymorphic hierarchy owned through `std::unique_ptr` with a virtual `eval`.

## Run

    make && ./expressionast
