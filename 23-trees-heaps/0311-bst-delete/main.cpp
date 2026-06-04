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

Node* minNode(Node* n) {
    while (n->left) n = n->left;
    return n;
}

Node* remove(Node* root, int v) {
    if (!root) return nullptr;
    if (v < root->val) root->left = remove(root->left, v);
    else if (v > root->val) root->right = remove(root->right, v);
    else {
        if (!root->left) return root->right;
        if (!root->right) return root->left;
        Node* succ = minNode(root->right);
        root->val = succ->val;
        root->right = remove(root->right, succ->val);
    }
    return root;
}

void inorder(Node* n, bool& first) {
    if (!n) return;
    inorder(n->left, first);
    if (!first) std::cout << " ";
    std::cout << n->val;
    first = false;
    inorder(n->right, first);
}

int main() {
    Node* root = nullptr;
    for (int v : {5, 3, 8, 1, 4}) root = insert(root, v);
    root = remove(root, 3);
    bool first = true;
    inorder(root, first);
    std::cout << "\n";
    return 0;
}
