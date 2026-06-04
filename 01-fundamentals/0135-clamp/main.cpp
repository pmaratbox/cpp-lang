#include <algorithm>
#include <iostream>

int main() {
    std::cout << std::clamp(15, 0, 10) << ' ' << std::clamp(-3, 0, 10) << '\n';
}
