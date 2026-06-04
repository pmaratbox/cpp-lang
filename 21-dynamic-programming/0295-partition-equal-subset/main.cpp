#include <iostream>
#include <vector>
#include <numeric>

int main() {
    const std::vector<int> nums{1, 5, 11, 5};
    const int total = std::accumulate(nums.begin(), nums.end(), 0);
    if (total % 2 != 0) {
        std::cout << "no" << '\n';
        return 0;
    }
    const int target = total / 2;
    std::vector<bool> dp(target + 1, false);
    dp[0] = true;
    for (int x : nums)
        for (int s = target; s >= x; --s)
            if (dp[s - x]) dp[s] = true;
    std::cout << (dp[target] ? "yes" : "no") << '\n';
}
