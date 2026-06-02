#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <iterator>

int main() {
    std::set<int> a = {1, 2, 3};
    std::set<int> b = {2, 3, 4};
    std::vector<int> u, in;
    std::set_union(a.begin(), a.end(), b.begin(), b.end(), std::back_inserter(u));
    std::set_intersection(a.begin(), a.end(), b.begin(), b.end(), std::back_inserter(in));

    bool first = true;
    for (int x : u) {
        if (!first) std::cout << ' ';
        std::cout << x;
        first = false;
    }
    std::cout << '\n';
    first = true;
    for (int x : in) {
        if (!first) std::cout << ' ';
        std::cout << x;
        first = false;
    }
    std::cout << '\n';
    return 0;
}
