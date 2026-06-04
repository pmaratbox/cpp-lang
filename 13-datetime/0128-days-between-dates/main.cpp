#include <iostream>

// days_from_civil: serial day number (Howard Hinnant's algorithm)
long days_from_civil(int y, unsigned m, unsigned d) {
    y -= m <= 2;
    const int era = (y >= 0 ? y : y - 399) / 400;
    const unsigned yoe = static_cast<unsigned>(y - era * 400);
    const unsigned doy = (153 * (m > 2 ? m - 3 : m + 9) + 2) / 5 + d - 1;
    const unsigned doe = yoe * 365 + yoe / 4 - yoe / 100 + doy;
    return era * 146097L + static_cast<long>(doe) - 719468;
}

int main() {
    long a = days_from_civil(2000, 1, 1);
    long b = days_from_civil(2000, 12, 31);
    std::cout << (b - a) << '\n';
}
