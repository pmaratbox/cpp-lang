#include <iostream>
#include <string>

struct Logger {
    virtual ~Logger() = default;
    virtual void log(const std::string& msg) = 0;
};

struct NullLogger : Logger {
    void log(const std::string&) override {}
};

struct RealLogger : Logger {
    int count = 0;
    void log(const std::string&) override { ++count; }
};

int main() {
    NullLogger nullLogger;
    RealLogger realLogger;
    nullLogger.log("ignored");
    realLogger.log("recorded");
    std::cout << realLogger.count << '\n';
}
