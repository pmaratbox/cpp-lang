#include <iostream>
#include <stack>

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

    std::stack<Node*> st;
    st.push(root);
    bool first = true;
    while (!st.empty()) {
        Node* n = st.top();
        st.pop();
        if (!first) std::cout << " ";
        std::cout << n->val;
        first = false;
        if (n->right) st.push(n->right);
        if (n->left) st.push(n->left);
    }
    std::cout << "\n";
    return 0;
}
