#include <iostream>
#include <string>
#include <string_view>

struct Color {
    int r, g, b;

    static Color fromHex(std::string_view hex) {
        if (!hex.empty() && hex.front() == '#') hex.remove_prefix(1);
        auto pair = [&](std::size_t i) {
            return std::stoi(std::string(hex.substr(i, 2)), nullptr, 16);
        };
        return Color{pair(0), pair(2), pair(4)};
    }
};

int main() {
    Color c = Color::fromHex("#ff0000");
    std::cout << c.r << ' ' << c.g << ' ' << c.b << '\n';
}
