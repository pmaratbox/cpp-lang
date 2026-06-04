#include <iostream>
#include <memory>
#include <vector>

struct Shape {
    virtual ~Shape() = default;
    virtual double area() const = 0;
};

struct Rectangle : Shape {
    double width;
    double height;
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override { return width * height; }
};

struct Triangle : Shape {
    double base;
    double height;
    Triangle(double b, double h) : base(b), height(h) {}
    double area() const override { return base * height / 2.0; }
};

int main() {
    std::vector<std::unique_ptr<Shape>> shapes;
    shapes.push_back(std::make_unique<Rectangle>(2, 3));
    shapes.push_back(std::make_unique<Triangle>(4, 4));

    double total = 0;
    for (const auto& s : shapes) total += s->area();

    std::cout << "total area: " << total << '\n';
}
