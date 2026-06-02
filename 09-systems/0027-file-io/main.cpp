#include <cstdio>
#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::string path = "greeting.txt";

    std::ofstream(path) << "hello, file";

    std::ifstream in(path);
    std::string content;
    std::getline(in, content);
    in.close();

    std::remove(path.c_str());
    std::cout << "read: " << content << '\n';
    return 0;
}
