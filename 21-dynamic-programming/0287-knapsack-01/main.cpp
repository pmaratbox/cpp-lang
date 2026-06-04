#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    struct Item { int w, v; };
    const std::vector<Item> items{{2, 3}, {3, 4}, {4, 5}};
    const int cap = 5;
    std::vector<int> dp(cap + 1, 0);
    for (const auto& it : items)
        for (int c = cap; c >= it.w; --c)
            dp[c] = std::max(dp[c], dp[c - it.w] + it.v);
    std::cout << dp[cap] << '\n';
}
