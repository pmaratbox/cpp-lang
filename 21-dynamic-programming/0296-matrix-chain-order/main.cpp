#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>

int main() {
    const std::vector<int> dims{10, 20, 30, 40};
    const int n = dims.size() - 1; // number of matrices
    std::vector<std::vector<long>> dp(n, std::vector<long>(n, 0));
    for (int len = 2; len <= n; ++len)
        for (int i = 0; i + len - 1 < n; ++i) {
            int j = i + len - 1;
            dp[i][j] = std::numeric_limits<long>::max();
            for (int k = i; k < j; ++k) {
                long cost = dp[i][k] + dp[k + 1][j]
                          + static_cast<long>(dims[i]) * dims[k + 1] * dims[j + 1];
                dp[i][j] = std::min(dp[i][j], cost);
            }
        }
    std::cout << dp[0][n - 1] << '\n';
}
