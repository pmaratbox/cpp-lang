#include <iostream>
#include <string>
#include <cctype>

struct Parser {
    std::string s;
    size_t pos = 0;

    char peek() { return pos < s.size() ? s[pos] : '\0'; }

    long number() {
        long v = 0;
        while (std::isdigit(static_cast<unsigned char>(peek()))) {
            v = v * 10 + (s[pos++] - '0');
        }
        return v;
    }

    long term() {
        long v = number();
        while (peek() == '*') {
            ++pos;
            v *= number();
        }
        return v;
    }

    long expr() {
        long v = term();
        while (peek() == '+') {
            ++pos;
            v += term();
        }
        return v;
    }
};

int main() {
    Parser p{"2+3*4"};
    std::cout << p.expr() << '\n';
}
