# 0366 — Sparse Matrix

Store only nonzero entries; with (1,1)=5 set, read (1,1) (5) and (0,0) (0), printing `5 0`. An std::map keyed by a (row,col) pair holds only nonzero cells, so a missing key reads as 0.

## Run

    make && ./sparsematrix
