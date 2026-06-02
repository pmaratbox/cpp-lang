#include <iostream>
#include <vector>
#include <memory>

struct Node {
    int value;
    std::unique_ptr<Node> left, right;
    Node(int v) : value(v) {}
};

void insert(std::unique_ptr<Node>& root, int value) {
    if (!root) {
        root = std::make_unique<Node>(value);
    } else if (value < root->value) {
        insert(root->left, value);
    } else {
        insert(root->right, value);
    }
}

void inorder(const std::unique_ptr<Node>& root, std::vector<int>& out) {
    if (!root) return;
    inorder(root->left, out);
    out.push_back(root->value);
    inorder(root->right, out);
}

int main() {
    std::unique_ptr<Node> root;
    for (int v : {5, 3, 8, 1, 4}) insert(root, v);
    std::vector<int> out;
    inorder(root, out);
    bool first = true;
    for (int x : out) {
        if (!first) std::cout << ' ';
        std::cout << x;
        first = false;
    }
    std::cout << '\n';
    return 0;
}
