# 0299 — Floyd-Warshall

Run all-pairs shortest paths on 0->1(3),1->2(1),0->2(5) and print the distance from 0 to 2 `4`. A nested `std::array` matrix holds the DP table whose entries are relaxed through every intermediate `k`.

## Run

    make && ./floydwarshall
