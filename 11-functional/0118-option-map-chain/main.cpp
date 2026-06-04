#include <iostream>
#include <optional>
#include <string>

int main() {
    std::optional<int> some = 10;
    std::optional<int> none = std::nullopt;

    auto plus2 = [](int x) { return x + 2; };

    auto a = some.transform(plus2);
    auto b = none.transform(plus2);

    std::cout << std::to_string(a.value_or(0)) << ' '
              << (b ? std::to_string(*b) : "none") << '\n';
}
