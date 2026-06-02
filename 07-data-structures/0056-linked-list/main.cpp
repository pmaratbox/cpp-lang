#include <iostream>
#include <memory>

struct Node {
    int value;
    std::unique_ptr<Node> next;
    Node(int v, std::unique_ptr<Node> n = nullptr) : value(v), next(std::move(n)) {}
};

int main() {
    auto head = std::make_unique<Node>(1,
        std::make_unique<Node>(2,
            std::make_unique<Node>(3)));

    bool first = true;
    for (Node *node = head.get(); node != nullptr; node = node->next.get()) {
        if (!first) std::cout << " -> ";
        std::cout << node->value;
        first = false;
    }
    std::cout << '\n';
    return 0;
}
