#include <array>
#include <iostream>
#include <string_view>

struct Point {
    int x;
    int y;
};

int main() {
    // C++23 has no stable runtime reflection, so the field names are listed
    // explicitly in declaration order.
    constexpr std::array<std::string_view, 2> fields{"x", "y"};
    bool first = true;
    for (auto f : fields) {
        if (!first) std::cout << ' ';
        std::cout << f;
        first = false;
    }
    std::cout << '\n';
    return 0;
}
