#include <iostream>
#include <string>

int main() {
    const std::string pattern = "ab";
    const std::string text = "aab";
    int state = 0;  // number of pattern chars matched so far
    int matchEnd = -1;
    for (size_t i = 0; i < text.size(); ++i) {
        if (text[i] == pattern[state]) {
            ++state;
        } else {
            state = (text[i] == pattern[0]) ? 1 : 0;
        }
        if (state == static_cast<int>(pattern.size())) {
            matchEnd = static_cast<int>(i);
            break;
        }
    }
    int start = matchEnd - static_cast<int>(pattern.size()) + 1;
    std::cout << start << '\n';
    return 0;
}
