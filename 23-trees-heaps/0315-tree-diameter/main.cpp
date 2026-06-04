#include <iostream>
#include <algorithm>

struct Node {
    char label;
    Node* left = nullptr;
    Node* right = nullptr;
    Node(char c) : label(c) {}
};

int diameter = 0;

int height(Node* n) {
    if (!n) return 0;
    int lh = height(n->left);
    int rh = height(n->right);
    diameter = std::max(diameter, lh + rh);
    return 1 + std::max(lh, rh);
}

int main() {
    Node root('R'), a('A'), b('B'), c('C'), d('D');
    root.left = &a; root.right = &b;
    a.left = &c; a.right = &d;

    height(&root);
    std::cout << diameter << "\n";
    return 0;
}
