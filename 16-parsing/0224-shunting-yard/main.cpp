#include <iostream>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

int prec(const std::string& op) {
    if (op == "+" || op == "-") return 1;
    if (op == "*" || op == "/") return 2;
    return 0;
}

int main() {
    std::string expr = "3 + 4 * 2";
    std::istringstream in(expr);
    std::vector<std::string> output;
    std::stack<std::string> ops;
    std::string tok;
    while (in >> tok) {
        if (prec(tok) > 0) {
            while (!ops.empty() && prec(ops.top()) >= prec(tok)) {
                output.push_back(ops.top());
                ops.pop();
            }
            ops.push(tok);
        } else {
            output.push_back(tok);
        }
    }
    while (!ops.empty()) {
        output.push_back(ops.top());
        ops.pop();
    }
    for (size_t i = 0; i < output.size(); ++i) {
        if (i) std::cout << ' ';
        std::cout << output[i];
    }
    std::cout << '\n';
}
