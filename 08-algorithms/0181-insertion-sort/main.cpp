#include <iostream>
#include <vector>

int main() {
    std::vector<int> a{5, 1, 4, 2, 8};
    for (std::size_t i = 1; i < a.size(); ++i) {
        int key = a[i];
        std::size_t j = i;
        while (j > 0 && a[j - 1] > key) {
            a[j] = a[j - 1];
            --j;
        }
        a[j] = key;
    }

    for (std::size_t i = 0; i < a.size(); ++i)
        std::cout << a[i] << (i + 1 < a.size() ? " " : "\n");
}
