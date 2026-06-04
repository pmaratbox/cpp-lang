#include <iostream>
#include <string>
#include <map>

int main() {
    std::map<std::string, std::string> vars{{"name", "Ada"}};
    std::string tmpl = "hi {name}";
    std::string out;
    for (size_t i = 0; i < tmpl.size();) {
        if (tmpl[i] == '{') {
            auto end = tmpl.find('}', i);
            std::string key = tmpl.substr(i + 1, end - i - 1);
            out += vars[key];
            i = end + 1;
        } else {
            out += tmpl[i++];
        }
    }
    std::cout << out << '\n';
}
