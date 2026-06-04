#include <iostream>
#include <memory>
#include <string>

struct Color {
    virtual ~Color() = default;
    virtual std::string name() const = 0;
};

struct Red : Color {
    std::string name() const override { return "red"; }
};

struct Shape {
    std::unique_ptr<Color> color;
    explicit Shape(std::unique_ptr<Color> c) : color(std::move(c)) {}
    virtual ~Shape() = default;
    virtual std::string describe() const = 0;
};

struct Circle : Shape {
    using Shape::Shape;
    std::string describe() const override { return color->name() + " circle"; }
};

int main() {
    Circle c(std::make_unique<Red>());
    std::cout << c.describe() << '\n';
}
