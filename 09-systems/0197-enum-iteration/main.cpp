#include <array>
#include <iostream>
#include <string_view>

enum class Color { RED, GREEN, BLUE };

constexpr std::string_view name(Color c) {
    switch (c) {
        case Color::RED:   return "RED";
        case Color::GREEN: return "GREEN";
        case Color::BLUE:  return "BLUE";
    }
    return "";
}

int main() {
    constexpr std::array colors{Color::RED, Color::GREEN, Color::BLUE};
    bool first = true;
    for (Color c : colors) {
        if (!first) std::cout << ' ';
        std::cout << name(c);
        first = false;
    }
    std::cout << '\n';
    return 0;
}
