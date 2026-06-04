#include <fstream>
#include <iostream>
#include <string>

int main() {
    const std::string path = "lines.tmp";

    {
        std::ofstream out(path);
        out << "one\n" << "two\n" << "three\n";
    }

    int count = 0;
    {
        std::ifstream in(path);
        std::string line;
        while (std::getline(in, line)) {
            if (!line.empty()) {
                ++count;
            }
        }
    }

    std::remove(path.c_str());

    std::cout << "lines: " << count << '\n';
    return 0;
}
