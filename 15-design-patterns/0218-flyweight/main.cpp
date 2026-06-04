#include <iostream>
#include <map>
#include <memory>

struct Glyph {
    char symbol;
    explicit Glyph(char s) : symbol(s) {}
};

struct GlyphFactory {
    std::map<char, std::shared_ptr<Glyph>> cache;
    std::shared_ptr<Glyph> get(char key) {
        auto it = cache.find(key);
        if (it != cache.end()) return it->second;
        auto g = std::make_shared<Glyph>(key);
        cache[key] = g;
        return g;
    }
};

int main() {
    GlyphFactory factory;
    factory.get('a');
    factory.get('b');
    factory.get('a');
    std::cout << factory.cache.size() << '\n';
}
