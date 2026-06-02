#include <cstdlib>
#include <iostream>
#include <string>

int main() {
    const char *raw = std::getenv("LESSON_ENV_VAR");
    std::string value = raw ? raw : "default";
    std::cout << "value: " << value << '\n';
    return 0;
}
