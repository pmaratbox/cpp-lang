#include <iostream>
#include <vector>

int main() {
    std::vector<int> a{2, 2, 1, 2, 3, 2};
    int candidate = 0, count = 0;
    for (int x : a) {
        if (count == 0) candidate = x;
        count += (x == candidate) ? 1 : -1;
    }
    std::cout << candidate << '\n';
}
