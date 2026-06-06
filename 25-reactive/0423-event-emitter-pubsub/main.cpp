#include <functional>
#include <iostream>
#include <map>
#include <string>
#include <vector>

// A multi-topic EventEmitter (pub/sub): topic -> list of handlers.
class EventEmitter {
public:
    using Handler = std::function<void(const std::string&)>;

    void on(const std::string& topic, int id, Handler handler) {
        handlers_[topic].push_back({id, std::move(handler)});
    }

    void emit(const std::string& topic, const std::string& payload) {
        auto it = handlers_.find(topic);
        if (it == handlers_.end()) return;
        for (const auto& entry : it->second) {
            entry.handler(payload);
        }
    }

    void off(const std::string& topic, int id) {
        auto it = handlers_.find(topic);
        if (it == handlers_.end()) return;
        auto& vec = it->second;
        for (auto h = vec.begin(); h != vec.end(); ++h) {
            if (h->id == id) {
                vec.erase(h);
                return;
            }
        }
    }

private:
    struct Entry {
        int id;
        Handler handler;
    };
    std::map<std::string, std::vector<Entry>> handlers_;
};

int main() {
    EventEmitter emitter;

    auto h = [](const std::string& payload) {
        std::cout << "hi " << payload << "\n";
    };
    auto g = [](const std::string& payload) {
        std::cout << "bye " << payload << "\n";
    };

    emitter.on("greet", 1, h);
    emitter.on("bye", 2, g);

    emitter.emit("greet", "ada");
    emitter.emit("bye", "ada");

    emitter.off("greet", 1);
    emitter.emit("greet", "x"); // handler removed -> nothing

    return 0;
}
