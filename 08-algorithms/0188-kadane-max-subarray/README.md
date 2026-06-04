# 0188 — Kadane Max Subarray

Find the maximum subarray sum of [-2,1,-3,4,-1,2,1,-5,4] with Kadane and print `6`. Tracks a running `std::max(cur+x, x)` and the best so far.

## Run

    make && ./maxsubarray
