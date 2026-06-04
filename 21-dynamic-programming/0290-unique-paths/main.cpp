#include <iostream>
#include <vector>

int main() {
    const int rows = 3, cols = 3;
    std::vector<int> dp(cols, 1);
    for (int r = 1; r < rows; ++r)
        for (int c = 1; c < cols; ++c)
            dp[c] += dp[c - 1];
    std::cout << dp[cols - 1] << '\n';
}
