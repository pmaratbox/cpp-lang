#include <iostream>
#include <memory>
#include <vector>

struct Component {
    virtual ~Component() = default;
    virtual int size() const = 0;
};

struct Leaf : Component {
    int value;
    explicit Leaf(int v) : value(v) {}
    int size() const override { return value; }
};

struct Composite : Component {
    std::vector<std::unique_ptr<Component>> children;
    void add(std::unique_ptr<Component> c) { children.push_back(std::move(c)); }
    int size() const override {
        int total = 0;
        for (const auto& c : children) total += c->size();
        return total;
    }
};

int main() {
    Composite root;
    root.add(std::make_unique<Leaf>(1));
    root.add(std::make_unique<Leaf>(2));
    root.add(std::make_unique<Leaf>(3));
    std::cout << root.size() << '\n';
}
