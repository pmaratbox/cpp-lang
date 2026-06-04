#include <iostream>
#include <string>

int main() {
    const std::string table =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    const std::string input = "hi";

    std::string out;
    std::size_t i = 0;
    while (i < input.size()) {
        unsigned int n = static_cast<unsigned char>(input[i]) << 16;
        int rem = static_cast<int>(input.size()) - static_cast<int>(i);
        if (rem > 1) n |= static_cast<unsigned char>(input[i + 1]) << 8;
        if (rem > 2) n |= static_cast<unsigned char>(input[i + 2]);

        out += table[(n >> 18) & 0x3F];
        out += table[(n >> 12) & 0x3F];
        out += (rem > 1) ? table[(n >> 6) & 0x3F] : '=';
        out += (rem > 2) ? table[n & 0x3F] : '=';
        i += 3;
    }

    std::cout << out << '\n';
    return 0;
}
