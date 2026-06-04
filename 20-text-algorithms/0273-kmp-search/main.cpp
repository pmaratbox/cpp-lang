#include <iostream>
#include <string>
#include <vector>

static std::vector<int> prefix_function(const std::string &p) {
    std::vector<int> pi(p.size(), 0);
    for (size_t i = 1; i < p.size(); ++i) {
        int j = pi[i - 1];
        while (j > 0 && p[i] != p[j]) j = pi[j - 1];
        if (p[i] == p[j]) ++j;
        pi[i] = j;
    }
    return pi;
}

int main() {
    std::string text = "ababab", pat = "ab";
    auto pi = prefix_function(pat);
    std::vector<int> hits;
    int j = 0;
    for (size_t i = 0; i < text.size(); ++i) {
        while (j > 0 && text[i] != pat[j]) j = pi[j - 1];
        if (text[i] == pat[j]) ++j;
        if (j == (int)pat.size()) {
            hits.push_back((int)i - j + 1);
            j = pi[j - 1];
        }
    }
    for (size_t i = 0; i < hits.size(); ++i)
        std::cout << (i ? " " : "") << hits[i];
    std::cout << "\n";
}
