#include <functional>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

bool test_add()    { return 1 + 1 == 2; }
bool test_concat() { return std::string("a") + "b" == "ab"; }
bool test_compare(){ return 3 > 2; }

int main() {
    std::vector<std::pair<std::string, std::function<bool()>>> tests = {
        {"add", test_add},
        {"concat", test_concat},
        {"compare", test_compare},
    };

    int passed = 0, failed = 0;
    for (const auto& [name, fn] : tests) {
        if (fn()) ++passed; else ++failed;
    }

    std::cout << passed << " passed, " << failed << " failed" << '\n';
    return 0;
}
