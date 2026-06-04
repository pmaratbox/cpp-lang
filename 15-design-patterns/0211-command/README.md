# 0211 — Command (Undo)

Execute an AddCommand that takes a counter from 0 to 5, then undo it back to 0, printing `5 0`. The command keeps a reference to the counter and pairs `execute()` with an inverse `undo()`.

## Run

    make && ./command
