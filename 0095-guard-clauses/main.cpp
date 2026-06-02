#include <iostream>
#include <string>

std::string classify(int n) {
    if (n < 0) return "negative";
    if (n == 0) return "zero";
    return "positive";
}

int main() {
    for (int n : {-1, 0, 5}) {
        std::cout << classify(n) << '\n';
    }
    return 0;
}
