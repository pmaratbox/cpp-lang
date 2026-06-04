#include <iostream>
#include <queue>

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

int main() {
    Node* root = nullptr;
    for (int v : {5, 3, 8, 1, 4}) root = insert(root, v);

    std::queue<Node*> q;
    q.push(root);
    bool first = true;
    while (!q.empty()) {
        Node* n = q.front();
        q.pop();
        if (!first) std::cout << " ";
        std::cout << n->val;
        first = false;
        if (n->left) q.push(n->left);
        if (n->right) q.push(n->right);
    }
    std::cout << "\n";
    return 0;
}
