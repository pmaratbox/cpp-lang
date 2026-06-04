#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    const std::string s = "bbbab";
    const int n = s.size();
    std::vector<std::vector<int>> dp(n, std::vector<int>(n, 0));
    for (int i = n - 1; i >= 0; --i) {
        dp[i][i] = 1;
        for (int j = i + 1; j < n; ++j) {
            if (s[i] == s[j])
                dp[i][j] = dp[i + 1][j - 1] + 2;
            else
                dp[i][j] = std::max(dp[i + 1][j], dp[i][j - 1]);
        }
    }
    std::cout << dp[0][n - 1] << '\n';
}
