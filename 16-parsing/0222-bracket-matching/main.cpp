#include <iostream>
#include <string>
#include <stack>

bool balanced(const std::string& s) {
    std::stack<char> st;
    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') st.push(c);
        else {
            if (st.empty()) return false;
            char o = st.top();
            st.pop();
            if ((c == ')' && o != '(') ||
                (c == ']' && o != '[') ||
                (c == '}' && o != '{')) return false;
        }
    }
    return st.empty();
}

int main() {
    std::cout << (balanced("([{}])") ? "yes" : "no") << ' '
              << (balanced("([)]") ? "yes" : "no") << '\n';
}
