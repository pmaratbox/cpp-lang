#include <algorithm>
#include <array>
#include <iostream>
#include <string>

int main() {
    std::string text = "zzabc", pat = "abc";
    int m = (int)pat.size(), n = (int)text.size();
    std::array<int, 256> last;
    last.fill(-1);
    for (int i = 0; i < m; ++i) last[(unsigned char)pat[i]] = i;

    int s = 0, found = -1;
    while (s <= n - m) {
        int j = m - 1;
        while (j >= 0 && pat[j] == text[s + j]) --j;
        if (j < 0) { found = s; break; }
        int bc = last[(unsigned char)text[s + j]];
        s += std::max(1, j - bc);
    }
    std::cout << found << "\n";
}
