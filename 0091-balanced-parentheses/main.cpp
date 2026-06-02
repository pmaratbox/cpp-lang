#include <iostream>
#include <string>
#include <stack>

bool is_balanced(const std::string& s) {
    std::stack<char> stack;
    for (char ch : s) {
        if (ch == '(') {
            stack.push(ch);
        } else if (ch == ')') {
            if (stack.empty()) return false;
            stack.pop();
        }
    }
    return stack.empty();
}

int main() {
    for (std::string s : {std::string("(())"), std::string("(()")}) {
        std::cout << (is_balanced(s) ? "yes" : "no") << '\n';
    }
    return 0;
}
