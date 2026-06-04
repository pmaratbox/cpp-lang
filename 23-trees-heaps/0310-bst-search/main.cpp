#include <iostream>

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

bool search(Node* root, int v) {
    while (root) {
        if (v == root->val) return true;
        root = (v < root->val) ? root->left : root->right;
    }
    return false;
}

int main() {
    Node* root = nullptr;
    for (int v : {5, 3, 8, 1, 4}) root = insert(root, v);
    std::cout << (search(root, 4) ? "yes" : "no") << " "
              << (search(root, 6) ? "yes" : "no") << "\n";
    return 0;
}
