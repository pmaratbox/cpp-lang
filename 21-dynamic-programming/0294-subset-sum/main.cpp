#include <iostream>
#include <vector>

int main() {
    const std::vector<int> nums{3, 34, 4, 12, 5, 2};
    const int target = 9;
    std::vector<bool> dp(target + 1, false);
    dp[0] = true;
    for (int x : nums)
        for (int s = target; s >= x; --s)
            if (dp[s - x]) dp[s] = true;
    std::cout << (dp[target] ? "yes" : "no") << '\n';
}
