#include <iostream>
#include <string>
#include <cmath>

int main() {
    const int width = 10;
    const double pct = 0.4;
    int filled = static_cast<int>(std::lround(width * pct));

    std::cout << '[' << std::string(filled, '#')
              << std::string(width - filled, '-') << ']' << '\n';
    return 0;
}
