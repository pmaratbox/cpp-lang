# 0272 — Glob Star Match

Match the glob "a*b" (* = any run) against "aaab" (yes) and "aac" (no), printing `yes no`. An iterative scan with a saved star position backtracks instead of recursing.

## Run

    make && ./globstarmatch
