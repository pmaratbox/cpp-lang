#include <iostream>
#include <limits>
#include <optional>

struct Node {
    int val;
    Node* left = nullptr;
    Node* right = nullptr;
    Node(int v) : val(v) {}
};

bool isBST(Node* n, long low, long high) {
    if (!n) return true;
    if (n->val <= low || n->val >= high) return false;
    return isBST(n->left, low, n->val) && isBST(n->right, n->val, high);
}

int main() {
    long lo = std::numeric_limits<long>::min();
    long hi = std::numeric_limits<long>::max();

    Node a(5), a1(3), a2(8), a3(1), a4(4);
    a.left = &a1; a.right = &a2; a1.left = &a3; a1.right = &a4;

    Node b(5), b1(3), b2(8), b3(1), b4(9);
    b.left = &b1; b.right = &b2; b1.left = &b3; b1.right = &b4; // 9 > 5 invalid

    std::cout << (isBST(&a, lo, hi) ? "yes" : "no") << " "
              << (isBST(&b, lo, hi) ? "yes" : "no") << "\n";
    return 0;
}
