#include <iostream>
#include <memory>

struct Node {
    int value;
    Node *prev = nullptr;
    std::unique_ptr<Node> next;
    explicit Node(int v) : value(v) {}
};

int main() {
    auto head = std::make_unique<Node>(1);
    head->next = std::make_unique<Node>(2);
    head->next->prev = head.get();
    head->next->next = std::make_unique<Node>(3);
    head->next->next->prev = head->next.get();

    Node *tail = head.get();
    bool first = true;
    for (Node *n = head.get(); n != nullptr; n = n->next.get()) {
        if (!first) std::cout << ' ';
        std::cout << n->value;
        first = false;
        tail = n;
    }
    std::cout << '\n';

    first = true;
    for (Node *n = tail; n != nullptr; n = n->prev) {
        if (!first) std::cout << ' ';
        std::cout << n->value;
        first = false;
    }
    std::cout << '\n';
    return 0;
}
