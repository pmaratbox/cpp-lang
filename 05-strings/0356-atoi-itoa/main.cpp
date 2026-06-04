#include <iostream>
#include <string>

int my_atoi(const std::string& s) {
    std::size_t i = 0;
    int sign = 1;
    if (i < s.size() && (s[i] == '+' || s[i] == '-')) {
        if (s[i] == '-') sign = -1;
        ++i;
    }
    int n = 0;
    for (; i < s.size() && s[i] >= '0' && s[i] <= '9'; ++i)
        n = n * 10 + (s[i] - '0');
    return sign * n;
}

std::string my_itoa(int n) {
    if (n == 0) return "0";
    bool neg = n < 0;
    unsigned long v = neg ? -static_cast<long>(n) : n;
    std::string digits;
    while (v > 0) {
        digits += static_cast<char>('0' + v % 10);
        v /= 10;
    }
    if (neg) digits += '-';
    return std::string(digits.rbegin(), digits.rend());
}

int main() {
    int parsed = my_atoi("-42");
    std::cout << parsed << ' ' << my_itoa(parsed) << '\n';
}
