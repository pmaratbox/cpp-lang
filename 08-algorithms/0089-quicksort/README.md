# 0089 — Quicksort

Sort the list `3, 1, 4, 1, 5, 2` using quicksort (partition around a pivot, then recurse on each side) and print the result: `1 1 2 3 4 5`. The tail is partitioned into `less`/`greater` vectors; the sorted halves are concatenated around the pivot.

## Run

    make && ./quicksort
