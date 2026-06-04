#include <filesystem>
#include <iostream>

int main() {
    namespace fs = std::filesystem;

    fs::path p = fs::path("/tmp") / "file.txt";

    std::cout << p.generic_string() << ' '
              << p.filename().generic_string() << ' '
              << p.extension().generic_string() << '\n';
    return 0;
}
