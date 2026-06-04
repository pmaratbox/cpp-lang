#include <iostream>
#include <sstream>
#include <stack>
#include <string>

int main() {
    std::string expr = "3 4 + 5 *";
    std::istringstream in(expr);
    std::stack<long> st;
    std::string tok;
    while (in >> tok) {
        if (tok == "+" || tok == "-" || tok == "*" || tok == "/") {
            long b = st.top(); st.pop();
            long a = st.top(); st.pop();
            long r = 0;
            if (tok == "+") r = a + b;
            else if (tok == "-") r = a - b;
            else if (tok == "*") r = a * b;
            else r = a / b;
            st.push(r);
        } else {
            st.push(std::stol(tok));
        }
    }
    std::cout << st.top() << '\n';
}
