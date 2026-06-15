#include <nlohmann/json.hpp>
#include <iostream>
using json = nlohmann::json;

int main() {
    json j;
    j["active"] = true;
    j["count"] = 5;
    j["label"] = "x";
    std::cout << j.dump() << "\n";
}
