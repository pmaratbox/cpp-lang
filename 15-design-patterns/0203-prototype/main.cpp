#include <iostream>
#include <memory>

struct Prototype {
    int value;
    explicit Prototype(int v) : value(v) {}
    std::unique_ptr<Prototype> clone() const { return std::make_unique<Prototype>(value); }
};

int main() {
    Prototype original(1);
    auto copy = original.clone();
    copy->value = 2;
    std::cout << original.value << ' ' << copy->value << '\n';
}
