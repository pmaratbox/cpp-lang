#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> a{1, 2, 3};
    do {
        for (std::size_t i = 0; i < a.size(); ++i)
            std::cout << a[i] << (i + 1 < a.size() ? " " : "\n");
    } while (std::next_permutation(a.begin(), a.end()));
}
