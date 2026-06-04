#include <iostream>
#include <string>

int main() {
    std::string row = "00100";
    std::string next(row.size(), '0');
    for (size_t i = 0; i < row.size(); ++i) {
        int left = (i > 0) ? row[i - 1] - '0' : 0;
        int right = (i + 1 < row.size()) ? row[i + 1] - '0' : 0;
        next[i] = static_cast<char>('0' + (left ^ right));
    }
    std::cout << next << '\n';
    return 0;
}
