#include <iostream>
#include <memory>
#include <string>
#include <vector>

class Shape {
public:
    virtual ~Shape() = default;
    virtual std::string name() const = 0;
    virtual int area() const = 0;
};

class Rectangle : public Shape {
public:
    Rectangle(int width, int height) : width(width), height(height) {}
    std::string name() const override { return "rectangle"; }
    int area() const override { return width * height; }

private:
    int width, height;
};

class Square : public Shape {
public:
    explicit Square(int side) : side(side) {}
    std::string name() const override { return "square"; }
    int area() const override { return side * side; }

private:
    int side;
};

int main() {
    std::vector<std::unique_ptr<Shape>> shapes;
    shapes.push_back(std::make_unique<Rectangle>(3, 4));
    shapes.push_back(std::make_unique<Square>(5));

    for (const auto &s : shapes) {
        std::cout << s->name() << " area: " << s->area() << '\n';
    }
    return 0;
}
