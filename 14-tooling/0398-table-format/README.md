# 0398 — Aligned Table

Format the rows (a,1),(bb,22) with the first column left-padded to the widest value, printing two aligned rows. A first pass finds the max width, then `string::resize` pads each first cell.

## Run

    make && ./tableformat
