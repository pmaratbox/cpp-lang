#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double n = 2.0;
    double x = n;
    for (int i = 0; i < 50; ++i) {
        double next = x - (x * x - n) / (2 * x);
        if (std::abs(next - x) < 1e-12) { x = next; break; }
        x = next;
    }
    std::cout << std::fixed << std::setprecision(4) << x << '\n';
    return 0;
}
