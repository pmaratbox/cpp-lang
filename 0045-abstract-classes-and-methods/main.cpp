#include <iostream>
#include <string>

class Shape {
public:
    virtual int area() const = 0;
    std::string describe() const {
        return "area: " + std::to_string(area());
    }
    virtual ~Shape() = default;
};

class Square : public Shape {
    int side;
public:
    Square(int s) : side(s) {}
    int area() const override {
        return side * side;
    }
};

int main() {
    Square sq(3);
    std::cout << sq.describe() << '\n';
    return 0;
}
