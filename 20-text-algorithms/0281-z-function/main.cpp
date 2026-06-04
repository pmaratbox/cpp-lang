#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string s = "aaaa";
    int n = (int)s.size();
    std::vector<int> z(n, 0);
    int l = 0, r = 0;
    for (int i = 1; i < n; ++i) {
        if (i < r) z[i] = std::min(r - i, z[i - l]);
        while (i + z[i] < n && s[z[i]] == s[i + z[i]]) ++z[i];
        if (i + z[i] > r) { l = i; r = i + z[i]; }
    }
    for (int i = 1; i < n; ++i)
        std::cout << (i > 1 ? " " : "") << z[i];
    std::cout << "\n";
}
