#include <iostream>
#include <vector>

int main() {
    std::vector<int> a{3, 1, 2, 3, 1};
    int maxv = 0;
    for (int x : a) if (x > maxv) maxv = x;
    std::vector<int> count(maxv + 1, 0);
    for (int x : a) ++count[x];
    bool first = true;
    for (int v = 0; v <= maxv; ++v)
        for (int c = 0; c < count[v]; ++c) {
            if (!first) std::cout << " ";
            std::cout << v;
            first = false;
        }
    std::cout << "\n";
}
