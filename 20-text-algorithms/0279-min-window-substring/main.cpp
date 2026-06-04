#include <array>
#include <iostream>
#include <string>

int main() {
    std::string s = "ADOBECODEBANC", t = "ABC";
    std::array<int, 128> need{};
    for (char c : t) ++need[(unsigned char)c];
    int required = (int)t.size();
    int bestLen = (int)s.size() + 1, bestStart = 0;
    int left = 0;
    for (int right = 0; right < (int)s.size(); ++right) {
        if (need[(unsigned char)s[right]]-- > 0) --required;
        while (required == 0) {
            if (right - left + 1 < bestLen) {
                bestLen = right - left + 1;
                bestStart = left;
            }
            if (++need[(unsigned char)s[left]] > 0) ++required;
            ++left;
        }
    }
    std::cout << s.substr(bestStart, bestLen) << "\n";
}
