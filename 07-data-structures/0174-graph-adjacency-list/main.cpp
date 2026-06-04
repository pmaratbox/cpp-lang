#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> adj = {
        {1, 2},
        {0, 3},
        {0, 3},
        {1, 2},
    };

    bool first = true;
    for (int n : adj[0]) {
        if (!first) std::cout << ' ';
        std::cout << n;
        first = false;
    }
    std::cout << '\n';
    return 0;
}
