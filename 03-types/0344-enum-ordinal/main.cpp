#include <array>
#include <iostream>

enum class Direction { N, E, S, W };

constexpr std::array<const char*, 4> names{"N", "E", "S", "W"};

int ordinal(Direction d) {
    return static_cast<int>(d);
}

int main() {
    std::cout << ordinal(Direction::S) << ' ' << names[3] << '\n';
}
