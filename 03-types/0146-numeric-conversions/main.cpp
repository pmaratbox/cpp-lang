#include <iostream>
#include <iomanip>

int main() {
    double d = 3.9;
    int truncated = static_cast<int>(d);

    int i = 3;
    float widened = static_cast<float>(i);

    std::cout << truncated << ' '
              << std::fixed << std::setprecision(1) << widened << '\n';
    return 0;
}
