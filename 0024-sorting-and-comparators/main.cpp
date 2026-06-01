#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void print_row(const std::string &label, const std::vector<int> &v) {
    std::cout << label << ":";
    for (int x : v) {
        std::cout << " " << x;
    }
    std::cout << "\n";
}

int main() {
    std::vector<int> asc = {3, 1, 2};
    std::vector<int> desc = {3, 1, 2};
    std::sort(asc.begin(), asc.end());
    std::sort(desc.begin(), desc.end(), std::greater<>());
    print_row("asc", asc);
    print_row("desc", desc);
    return 0;
}
