#include <iostream>
#include <vector>

int main() {
    const std::vector<int> coins{1, 2, 5};
    const int target = 5;
    std::vector<int> dp(target + 1, 0);
    dp[0] = 1;
    for (int c : coins)
        for (int amount = c; amount <= target; ++amount)
            dp[amount] += dp[amount - c];
    std::cout << dp[target] << '\n';
}
