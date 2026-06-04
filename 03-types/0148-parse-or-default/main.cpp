#include <iostream>
#include <string>
#include <string_view>
#include <charconv>

int parse_or_default(std::string_view text, int fallback) {
    int value{};
    auto [ptr, ec] = std::from_chars(text.data(), text.data() + text.size(), value);
    if (ec == std::errc{} && ptr == text.data() + text.size()) {
        return value;
    }
    return fallback;
}

int main() {
    std::cout << parse_or_default("42", 0) << ' '
              << parse_or_default("x", 0) << '\n';
    return 0;
}
