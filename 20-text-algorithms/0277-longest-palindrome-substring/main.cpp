#include <iostream>
#include <string>

int main() {
    std::string s = "babad";
    int n = (int)s.size();
    int bestStart = 0, bestLen = 0;
    auto expand = [&](int l, int r) {
        while (l >= 0 && r < n && s[l] == s[r]) { --l; ++r; }
        int len = r - l - 1;
        if (len > bestLen) { bestLen = len; bestStart = l + 1; }
    };
    for (int i = 0; i < n; ++i) {
        expand(i, i);
        expand(i, i + 1);
    }
    std::cout << s.substr(bestStart, bestLen) << "\n";
}
