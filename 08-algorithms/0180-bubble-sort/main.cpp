#include <iostream>
#include <vector>

int main() {
    std::vector<int> a{5, 1, 4, 2, 8};
    for (std::size_t i = 0; i + 1 < a.size(); ++i)
        for (std::size_t j = 0; j + 1 < a.size() - i; ++j)
            if (a[j] > a[j + 1])
                std::swap(a[j], a[j + 1]);

    for (std::size_t i = 0; i < a.size(); ++i)
        std::cout << a[i] << (i + 1 < a.size() ? " " : "\n");
}
