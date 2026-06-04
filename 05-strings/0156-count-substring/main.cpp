#include <iostream>
#include <string>

int main() {
    std::string text = "ababab";
    std::string needle = "ab";
    int count = 0;
    std::size_t pos = 0;
    while ((pos = text.find(needle, pos)) != std::string::npos) {
        ++count;
        pos += needle.size();
    }
    std::cout << count << '\n';
    return 0;
}
