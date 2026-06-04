#include <iostream>
#include <vector>

int main() {
    std::vector<int> a{5, 2, 8, 1, 9, 3};
    for (std::size_t gap = a.size() / 2; gap > 0; gap /= 2) {
        for (std::size_t i = gap; i < a.size(); ++i) {
            int tmp = a[i];
            std::size_t j = i;
            while (j >= gap && a[j - gap] > tmp) {
                a[j] = a[j - gap];
                j -= gap;
            }
            a[j] = tmp;
        }
    }
    for (std::size_t i = 0; i < a.size(); ++i)
        std::cout << a[i] << (i + 1 < a.size() ? " " : "\n");
}
