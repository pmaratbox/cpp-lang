#include <functional>
#include <iostream>
#include <optional>

std::optional<int> mbind(std::optional<int> m, std::function<std::optional<int>(int)> f) {
    return m ? f(*m) : std::nullopt;
}

int main() {
    auto present = mbind(mbind(std::optional<int>{2}, [](int x) { return std::optional<int>{x + 3}; }),
                         [](int x) { return std::optional<int>{x * 2}; });
    auto absent = mbind(mbind(std::optional<int>{}, [](int x) { return std::optional<int>{x + 3}; }),
                        [](int x) { return std::optional<int>{x * 2}; });

    std::cout << present.value_or(-1) << ' ';
    if (absent)
        std::cout << *absent;
    else
        std::cout << "none";
    std::cout << '\n';
}
