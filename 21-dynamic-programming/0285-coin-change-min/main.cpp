#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    const std::vector<int> coins{1, 2, 5};
    const int target = 11;
    std::vector<int> dp(target + 1, target + 1);
    dp[0] = 0;
    for (int amount = 1; amount <= target; ++amount)
        for (int c : coins)
            if (c <= amount)
                dp[amount] = std::min(dp[amount], dp[amount - c] + 1);
    std::cout << dp[target] << '\n';
}
