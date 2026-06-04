#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string a = "abcde", b = "xbcdy";
    std::vector<std::vector<int>> dp(a.size() + 1, std::vector<int>(b.size() + 1, 0));
    int best = 0, end = 0;
    for (size_t i = 1; i <= a.size(); ++i)
        for (size_t j = 1; j <= b.size(); ++j)
            if (a[i - 1] == b[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                if (dp[i][j] > best) {
                    best = dp[i][j];
                    end = (int)i;
                }
            }
    std::cout << a.substr(end - best, best) << "\n";
}
