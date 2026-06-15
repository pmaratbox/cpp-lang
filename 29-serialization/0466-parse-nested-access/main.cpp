#include <nlohmann/json.hpp>
#include <iostream>
#include <string>

using json = nlohmann::json;

int main() {
    std::string text = R"({"user":{"name":"alice","roles":["admin","user"]}})";
    json j = json::parse(text);

    std::string name = j["user"]["name"].get<std::string>();
    std::string first_role = j["user"]["roles"][0].get<std::string>();

    std::cout << name << " " << first_role << "\n";
}
