#include <iostream>
#include <variant>
#include <vector>

struct Node;
using Tree = std::vector<Node>;
struct Node : std::variant<int, Tree> {
    using std::variant<int, Tree>::variant;
};

void flatten(const Node& n, std::vector<int>& out) {
    if (std::holds_alternative<int>(n)) {
        out.push_back(std::get<int>(n));
    } else {
        for (const auto& c : std::get<Tree>(n)) flatten(c, out);
    }
}

int main() {
    Tree data{
        Node{1},
        Node{Tree{Node{2}, Node{Tree{Node{3}, Node{4}}}}},
        Node{5},
    };
    std::vector<int> out;
    for (const auto& n : data) flatten(n, out);
    for (std::size_t i = 0; i < out.size(); ++i) {
        std::cout << out[i];
        if (i + 1 < out.size()) std::cout << ' ';
    }
    std::cout << '\n';
}
