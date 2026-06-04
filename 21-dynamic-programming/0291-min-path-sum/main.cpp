#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

int main() {
    const std::vector<std::vector<int>> grid{{1, 3, 1}, {1, 5, 1}, {4, 2, 1}};
    const int rows = grid.size(), cols = grid[0].size();
    std::vector<int> dp(cols, std::numeric_limits<int>::max());
    dp[0] = 0;
    for (int r = 0; r < rows; ++r)
        for (int c = 0; c < cols; ++c) {
            int best = dp[c];
            if (c > 0) best = std::min(best, dp[c - 1]);
            dp[c] = best + grid[r][c];
        }
    std::cout << dp[cols - 1] << '\n';
}
