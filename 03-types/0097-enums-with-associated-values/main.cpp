#include <iostream>
#include <variant>

struct Rect {
    int w, h;
};

struct Square {
    int s;
};

using Shape = std::variant<Rect, Square>;

int area(const Shape& shape) {
    if (std::holds_alternative<Rect>(shape)) {
        const Rect& r = std::get<Rect>(shape);
        return r.w * r.h;
    }
    const Square& sq = std::get<Square>(shape);
    return sq.s * sq.s;
}

int main() {
    Shape shapes[] = {Rect{2, 3}, Square{4}};
    for (const auto& shape : shapes) {
        std::cout << area(shape) << '\n';
    }
    return 0;
}
