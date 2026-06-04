#include <iostream>
#include <memory>
#include <vector>

struct Shape {
    virtual ~Shape() = default;
    virtual std::string describe() const = 0;
};

struct Circle : Shape {
    std::string describe() const override { return "circle"; }
};

struct Square : Shape {
    std::string describe() const override { return "square"; }
};

struct Triangle : Shape {
    std::string describe() const override { return "triangle"; }
};

int main() {
    std::vector<std::unique_ptr<Shape>> shapes;
    shapes.push_back(std::make_unique<Circle>());
    shapes.push_back(std::make_unique<Square>());
    shapes.push_back(std::make_unique<Triangle>());

    bool first = true;
    for (const auto& s : shapes) {
        if (!first) std::cout << ' ';
        std::cout << s->describe();
        first = false;
    }
    std::cout << '\n';
}
