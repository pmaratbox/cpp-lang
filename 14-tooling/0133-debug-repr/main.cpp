#include <iostream>
#include <ostream>

struct Point {
    int x;
    int y;
};

std::ostream& operator<<(std::ostream& os, const Point& p) {
    return os << "Point(x=" << p.x << ", y=" << p.y << ")";
}

int main() {
    Point p{1, 2};
    std::cout << p << '\n';
    return 0;
}
