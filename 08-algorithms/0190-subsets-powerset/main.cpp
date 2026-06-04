#include <iostream>
#include <vector>

int main() {
    std::vector<int> a{1, 2, 3};
    int n = static_cast<int>(a.size());
    for (int mask = 0; mask < (1 << n); ++mask) {
        if (mask == 0) {
            std::cout << "{}\n";
            continue;
        }
        bool first = true;
        for (int i = 0; i < n; ++i)
            if (mask & (1 << i)) {
                std::cout << (first ? "" : " ") << a[i];
                first = false;
            }
        std::cout << '\n';
    }
}
