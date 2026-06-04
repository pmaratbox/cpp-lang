# 0260 — Pack and Unpack Bits

Pack r=1,g=2,b=3 into one integer (8 bits each) then unpack them, printing `1 2 3`. In cpp shifts build the packed value and `>> n & 0xff` extracts each field.

## Run

    make && ./packunpackbits
