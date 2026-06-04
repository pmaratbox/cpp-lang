#include <array>
#include <iostream>

int main() {
    constexpr std::size_t cap = 3;
    std::array<int, cap> buf{};
    std::size_t head = 0;
    std::size_t count = 0;

    for (int v : {1, 2, 3, 4, 5}) {
        buf[(head + count) % cap] = v;
        if (count < cap)
            ++count;
        else
            head = (head + 1) % cap;
    }

    for (std::size_t i = 0; i < count; ++i) {
        if (i) std::cout << ' ';
        std::cout << buf[(head + i) % cap];
    }
    std::cout << '\n';
    return 0;
}
