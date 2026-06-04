#include <iostream>
#include <vector>
#include <utility>

int main() {
    std::vector<int> a{5, 1, 4, 2};
    for (std::size_t i = 0; i < a.size(); ++i) {
        std::size_t min = i;
        for (std::size_t j = i + 1; j < a.size(); ++j)
            if (a[j] < a[min]) min = j;
        std::swap(a[i], a[min]);
    }
    for (std::size_t i = 0; i < a.size(); ++i)
        std::cout << a[i] << (i + 1 < a.size() ? " " : "\n");
}
