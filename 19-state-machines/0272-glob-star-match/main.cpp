#include <iostream>
#include <string>

bool globMatch(const std::string& pat, const std::string& text) {
    size_t p = 0, t = 0;
    size_t star = std::string::npos, mark = 0;
    while (t < text.size()) {
        if (p < pat.size() && (pat[p] == text[t])) {
            ++p;
            ++t;
        } else if (p < pat.size() && pat[p] == '*') {
            star = p++;
            mark = t;
        } else if (star != std::string::npos) {
            p = star + 1;
            t = ++mark;
        } else {
            return false;
        }
    }
    while (p < pat.size() && pat[p] == '*') ++p;
    return p == pat.size();
}

int main() {
    std::cout << (globMatch("a*b", "aaab") ? "yes" : "no") << ' '
              << (globMatch("a*b", "aac") ? "yes" : "no") << '\n';
    return 0;
}
