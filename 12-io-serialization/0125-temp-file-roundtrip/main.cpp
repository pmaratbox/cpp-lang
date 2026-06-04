#include <filesystem>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

int main() {
    namespace fs = std::filesystem;

    const std::string original = "ok-data";
    fs::path path = fs::temp_directory_path() / "roundtrip.tmp";

    {
        std::ofstream out(path);
        out << original;
    }

    std::string readback;
    {
        std::ifstream in(path);
        std::ostringstream ss;
        ss << in.rdbuf();
        readback = ss.str();
    }

    fs::remove(path);

    std::cout << "roundtrip: " << (readback == original ? "ok" : "fail") << '\n';
    return 0;
}
