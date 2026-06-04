#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<int> xs{1, 1, 2, 3, 3, 3};
    std::string out;
    for (std::size_t i = 0; i < xs.size();) {
        std::size_t j = i;
        if (!out.empty()) out += "|";
        while (j < xs.size() && xs[j] == xs[i]) {
            if (j != i) out += " ";
            out += std::to_string(xs[j]);
            ++j;
        }
        i = j;
    }
    std::cout << out << "\n";
}
