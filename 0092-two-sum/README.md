# 0092 — Two Sum

Find the two indices in `2, 7, 11, 15` whose values sum to `9` and print them: `0 1`. `std::unordered_map` of value to index lets `find(target - nums[i])` locate the complement in one pass.

## Run

    make && ./twosum
