#include <iostream>
#include <array>
#include <string_view>

int main() {
    constexpr std::array<std::string_view, 7> names = {
        "Sunday", "Monday", "Tuesday", "Wednesday",
        "Thursday", "Friday", "Saturday"
    };
    int start = 6; // Saturday
    int result = (start + 3) % 7;
    std::cout << names[result] << '\n';
}
