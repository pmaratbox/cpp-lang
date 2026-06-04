# 0390 — Big-Endian Bytes

Encode the integer 258 as two big-endian bytes (1, 2), decode them back to 258, printing `1 2 258`. Bit shifts split the value and `high*256+low` recombines it.

## Run

    make && ./binaryendian
