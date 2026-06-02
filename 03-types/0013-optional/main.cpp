#include <iostream>
#include <optional>

int main() {
    std::optional<int> present = 42;
    std::optional<int> absent = std::nullopt;

    std::cout << "present: " << present.value_or(-1) << '\n';
    std::cout << "absent: " << absent.value_or(-1) << '\n';
    return 0;
}
