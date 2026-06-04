#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text = "xabxab", pat = "ab";
    int m = (int)pat.size(), n = (int)text.size();
    const unsigned long long base = 256, mod = 1000000007ULL;

    unsigned long long ph = 0, th = 0, pow = 1;
    for (int i = 0; i < m; ++i) {
        ph = (ph * base + (unsigned char)pat[i]) % mod;
        th = (th * base + (unsigned char)text[i]) % mod;
        if (i) pow = (pow * base) % mod;
    }

    std::vector<int> hits;
    for (int i = 0; i + m <= n; ++i) {
        if (i) {
            th = (th + mod - (unsigned char)text[i - 1] * pow % mod) % mod;
            th = (th * base + (unsigned char)text[i + m - 1]) % mod;
        }
        if (th == ph && text.compare(i, m, pat) == 0) hits.push_back(i);
    }
    for (size_t i = 0; i < hits.size(); ++i)
        std::cout << (i ? " " : "") << hits[i];
    std::cout << "\n";
}
