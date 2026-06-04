#include <iostream>
#include <memory>
#include <vector>

struct Visitor;

struct Node {
    virtual ~Node() = default;
    virtual void accept(Visitor& v) = 0;
};

struct Leaf : Node {
    int value;
    explicit Leaf(int v) : value(v) {}
    void accept(Visitor& v) override;
};

struct Visitor {
    int total = 0;
    void visit(Leaf& leaf) { total += leaf.value; }
};

void Leaf::accept(Visitor& v) { v.visit(*this); }

int main() {
    std::vector<std::unique_ptr<Node>> tree;
    tree.push_back(std::make_unique<Leaf>(1));
    tree.push_back(std::make_unique<Leaf>(2));
    tree.push_back(std::make_unique<Leaf>(3));

    Visitor sum;
    for (auto& n : tree) n->accept(sum);
    std::cout << sum.total << '\n';
}
