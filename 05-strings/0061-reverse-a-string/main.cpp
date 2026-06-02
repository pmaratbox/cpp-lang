#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string text = "abc";
    std::reverse(text.begin(), text.end());
    std::cout << text << '\n';
    return 0;
}
