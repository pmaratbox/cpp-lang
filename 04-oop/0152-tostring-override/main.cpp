#include <iostream>
#include <ostream>

class Point {
    int x;
    int y;

public:
    Point(int x, int y) : x(x), y(y) {}

    friend std::ostream& operator<<(std::ostream& os, const Point& p) {
        return os << "Point(" << p.x << ", " << p.y << ")";
    }
};

int main() {
    Point p(1, 2);
    std::cout << p << '\n';
}
