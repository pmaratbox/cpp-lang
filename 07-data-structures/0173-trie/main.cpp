#include <iostream>
#include <map>
#include <memory>
#include <string>

struct TrieNode {
    std::map<char, std::unique_ptr<TrieNode>> children;
    bool end = false;
};

void insert(TrieNode &root, const std::string &word) {
    TrieNode *node = &root;
    for (char c : word) {
        auto &child = node->children[c];
        if (!child) child = std::make_unique<TrieNode>();
        node = child.get();
    }
    node->end = true;
}

bool search(const TrieNode &root, const std::string &word) {
    const TrieNode *node = &root;
    for (char c : word) {
        auto it = node->children.find(c);
        if (it == node->children.end()) return false;
        node = it->second.get();
    }
    return node->end;
}

int main() {
    TrieNode root;
    insert(root, "cat");
    insert(root, "car");
    std::cout << (search(root, "car") ? "yes" : "no") << ' '
              << (search(root, "can") ? "yes" : "no") << '\n';
    return 0;
}
