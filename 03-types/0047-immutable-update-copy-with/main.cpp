#include <iostream>

struct Point {
    int x, y;
};

int main() {
    Point p1{1, 2};
    Point p2 = p1;
    p2.x = 9;
    std::cout << "original: (" << p1.x << ", " << p1.y << ")\n";
    std::cout << "updated: (" << p2.x << ", " << p2.y << ")\n";
    return 0;
}
