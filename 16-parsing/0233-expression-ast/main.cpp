#include <iostream>
#include <memory>

struct Node {
    virtual long eval() const = 0;
    virtual ~Node() = default;
};

struct Num : Node {
    long v;
    explicit Num(long v) : v(v) {}
    long eval() const override { return v; }
};

struct Add : Node {
    std::unique_ptr<Node> l, r;
    Add(std::unique_ptr<Node> l, std::unique_ptr<Node> r)
        : l(std::move(l)), r(std::move(r)) {}
    long eval() const override { return l->eval() + r->eval(); }
};

struct Mul : Node {
    std::unique_ptr<Node> l, r;
    Mul(std::unique_ptr<Node> l, std::unique_ptr<Node> r)
        : l(std::move(l)), r(std::move(r)) {}
    long eval() const override { return l->eval() * r->eval(); }
};

int main() {
    // 1 + 2 * 3
    auto ast = std::make_unique<Add>(
        std::make_unique<Num>(1),
        std::make_unique<Mul>(std::make_unique<Num>(2),
                              std::make_unique<Num>(3)));
    std::cout << ast->eval() << '\n';
}
