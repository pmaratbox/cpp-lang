#include <iostream>
#include <map>
#include <memory>
#include <string>
#include <vector>

struct Node {
    std::map<char, std::unique_ptr<Node>> kids;
    bool end = false;
};

static void insert(Node *n, const std::string &w) {
    for (char c : w) {
        auto &child = n->kids[c];
        if (!child) child = std::make_unique<Node>();
        n = child.get();
    }
    n->end = true;
}

static void collect(Node *n, std::string &cur, std::vector<std::string> &out) {
    if (n->end) out.push_back(cur);
    for (auto &[c, child] : n->kids) {
        cur.push_back(c);
        collect(child.get(), cur, out);
        cur.pop_back();
    }
}

int main() {
    Node root;
    for (const std::string &w : {"car", "card", "dog"}) insert(&root, w);

    std::string prefix = "car";
    Node *n = &root;
    for (char c : prefix) n = n->kids.at(c).get();

    std::vector<std::string> out;
    std::string cur = prefix;
    collect(n, cur, out);

    for (size_t i = 0; i < out.size(); ++i)
        std::cout << (i ? " " : "") << out[i];
    std::cout << "\n";
}
