#include <iostream>
#include <functional>
#include <map>
#include <string>

int main() {
    std::map<std::string, std::function<int(int, int)>> ops{
        {"add", [](int a, int b) { return a + b; }},
        {"mul", [](int a, int b) { return a * b; }},
    };
    std::cout << ops["add"](3, 4) << ' ' << ops["mul"](3, 4) << '\n';
}
