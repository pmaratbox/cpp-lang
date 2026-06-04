#include <iostream>
#include <vector>
#include <utility>

int main() {
    std::vector<int> a{2, 0, 2, 1, 1, 0};
    std::size_t low = 0, mid = 0, high = a.size() - 1;
    while (mid <= high) {
        if (a[mid] == 0) std::swap(a[low++], a[mid++]);
        else if (a[mid] == 1) ++mid;
        else std::swap(a[mid], a[high--]);
    }
    for (std::size_t i = 0; i < a.size(); ++i)
        std::cout << a[i] << (i + 1 < a.size() ? " " : "\n");
}
