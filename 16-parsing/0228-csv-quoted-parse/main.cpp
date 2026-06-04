#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string row = "a,\"b,c\",d";
    std::vector<std::string> fields;
    std::string cur;
    bool in_quotes = false;
    for (char c : row) {
        if (c == '"') {
            in_quotes = !in_quotes;
        } else if (c == ',' && !in_quotes) {
            fields.push_back(cur);
            cur.clear();
        } else {
            cur += c;
        }
    }
    fields.push_back(cur);
    for (size_t i = 0; i < fields.size(); ++i) {
        if (i) std::cout << '|';
        std::cout << fields[i];
    }
    std::cout << '\n';
}
