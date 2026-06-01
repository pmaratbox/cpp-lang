#include <iostream>

struct Point {
    int x, y;

    Point operator+(const Point &other) const {
        return Point{x + other.x, y + other.y};
    }
};

int main() {
    Point p = Point{1, 2} + Point{3, 4};
    std::cout << "(" << p.x << ", " << p.y << ")\n";
    return 0;
}
