#include <iostream>

enum class Color {
    Red,
    Green,
    Blue,
};

int main() {
    std::cout << "green: " << static_cast<int>(Color::Green) << '\n';
    std::cout << "blue: " << static_cast<int>(Color::Blue) << '\n';
    return 0;
}
