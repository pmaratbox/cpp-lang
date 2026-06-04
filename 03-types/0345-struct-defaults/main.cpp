#include <iostream>

struct Point {
    int x = 0;
    int y = 0;
};

int main() {
    Point a{};
    Point b{.x = 5};
    std::cout << a.x << ' ' << a.y << '\n';
    std::cout << b.x << ' ' << b.y << '\n';
}
