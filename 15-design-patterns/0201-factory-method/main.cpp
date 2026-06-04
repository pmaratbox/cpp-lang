#include <iostream>
#include <memory>
#include <string>

struct Shape {
    virtual ~Shape() = default;
    virtual std::string kind() const = 0;
};

struct Circle : Shape { std::string kind() const override { return "circle"; } };
struct Square : Shape { std::string kind() const override { return "square"; } };

std::unique_ptr<Shape> make_shape(const std::string& name) {
    if (name == "circle") return std::make_unique<Circle>();
    return std::make_unique<Square>();
}

int main() {
    auto a = make_shape("circle");
    auto b = make_shape("square");
    std::cout << a->kind() << ' ' << b->kind() << '\n';
}
