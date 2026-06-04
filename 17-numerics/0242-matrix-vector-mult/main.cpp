#include <iostream>
#include <array>

int main() {
    std::array<std::array<int, 2>, 2> m{{{1, 2}, {3, 4}}};
    std::array<int, 2> v{5, 6};
    for (int i = 0; i < 2; ++i) {
        int sum = m[i][0] * v[0] + m[i][1] * v[1];
        std::cout << sum;
        std::cout << (i == 0 ? ' ' : '\n');
    }
    return 0;
}
