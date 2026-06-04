#include <iostream>
#include <algorithm>

struct Node {
    int val;
    Node* left = nullptr;
    Node* right = nullptr;
    Node(int v) : val(v) {}
};

Node* insert(Node* root, int v) {
    if (!root) return new Node(v);
    if (v < root->val) root->left = insert(root->left, v);
    else root->right = insert(root->right, v);
    return root;
}

int height(Node* n) {
    if (!n) return 0;
    return 1 + std::max(height(n->left), height(n->right));
}

int main() {
    Node* root = nullptr;
    for (int v : {5, 3, 8, 1, 4}) root = insert(root, v);
    std::cout << height(root) << "\n";
    return 0;
}
