#include <iostream>
#include <stack>

int main() {
    std::stack<int> stack;
    for (int n = 1; n <= 3; n++) {
        stack.push(n);
    }

    std::cout << stack.top();
    stack.pop();
    while (!stack.empty()) {
        std::cout << " " << stack.top();
        stack.pop();
    }
    std::cout << "\n";
    return 0;
}
