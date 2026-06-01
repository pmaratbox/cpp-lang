#include <iostream>

struct Point {
    int x, y;
    bool operator==(const Point &) const = default;
};

int main() {
    Point p1{1, 2};
    Point p2{1, 2};
    std::cout << "point: (" << p1.x << ", " << p1.y << ")\n";
    std::cout << "equal: " << (p1 == p2 ? "yes" : "no") << '\n';
    return 0;
}
