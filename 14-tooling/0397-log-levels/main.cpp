#include <iostream>
#include <string>
#include <vector>
#include <utility>

enum Level { INFO, WARN, ERROR };

const char* name(Level l) {
    switch (l) {
        case INFO:  return "INFO";
        case WARN:  return "WARN";
        case ERROR: return "ERROR";
    }
    return "";
}

int main() {
    const Level threshold = WARN;
    std::vector<std::pair<Level, std::string>> msgs = {
        {INFO, "i"}, {WARN, "w"}, {ERROR, "e"}
    };

    for (const auto& [lvl, msg] : msgs) {
        if (lvl >= threshold)
            std::cout << name(lvl) << ": " << msg << '\n';
    }
    return 0;
}
