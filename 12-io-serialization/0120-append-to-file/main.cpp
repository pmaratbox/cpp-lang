#include <fstream>
#include <iostream>
#include <string>
#include <vector>

int main() {
    const std::string path = "data.tmp";

    {
        std::ofstream out(path);
        out << "a\n";
    }
    {
        std::ofstream app(path, std::ios::app);
        app << "b\n";
    }

    std::vector<std::string> lines;
    {
        std::ifstream in(path);
        std::string line;
        while (std::getline(in, line)) {
            lines.push_back(line);
        }
    }

    std::remove(path.c_str());

    for (std::size_t i = 0; i < lines.size(); ++i) {
        if (i) std::cout << ' ';
        std::cout << lines[i];
    }
    std::cout << '\n';
    return 0;
}
