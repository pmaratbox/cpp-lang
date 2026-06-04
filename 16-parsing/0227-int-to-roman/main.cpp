#include <iostream>
#include <string>
#include <array>
#include <utility>

int main() {
    std::array<std::pair<int, const char*>, 13> table{{
        {1000,"M"},{900,"CM"},{500,"D"},{400,"CD"},
        {100,"C"},{90,"XC"},{50,"L"},{40,"XL"},
        {10,"X"},{9,"IX"},{5,"V"},{4,"IV"},{1,"I"}
    }};
    int n = 14;
    std::string out;
    for (auto& [v, sym] : table) {
        while (n >= v) {
            out += sym;
            n -= v;
        }
    }
    std::cout << out << '\n';
}
