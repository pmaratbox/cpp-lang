#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::string multiplyStrings(const std::string& a, const std::string& b) {
    std::vector<int> result(a.size() + b.size(), 0);
    for (int i = static_cast<int>(a.size()) - 1; i >= 0; --i) {
        for (int j = static_cast<int>(b.size()) - 1; j >= 0; --j) {
            int mul = (a[i] - '0') * (b[j] - '0');
            int p1 = i + j, p2 = i + j + 1;
            int sum = mul + result[p2];
            result[p2] = sum % 10;
            result[p1] += sum / 10;
        }
    }
    std::string s;
    for (int d : result) {
        if (!(s.empty() && d == 0)) s.push_back(static_cast<char>('0' + d));
    }
    return s.empty() ? "0" : s;
}

int main() {
    std::cout << multiplyStrings("123", "456") << '\n';
    return 0;
}
