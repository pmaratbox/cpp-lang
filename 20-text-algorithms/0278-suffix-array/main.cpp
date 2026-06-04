#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

int main() {
    std::string s = "banana";
    std::vector<int> sa(s.size());
    std::iota(sa.begin(), sa.end(), 0);
    std::sort(sa.begin(), sa.end(), [&](int a, int b) {
        return s.compare(a, std::string::npos, s, b, std::string::npos) < 0;
    });
    for (size_t i = 0; i < sa.size(); ++i)
        std::cout << (i ? " " : "") << sa[i];
    std::cout << "\n";
}
