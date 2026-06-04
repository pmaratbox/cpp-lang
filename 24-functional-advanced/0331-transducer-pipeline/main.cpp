#include <functional>
#include <iostream>
#include <vector>

int main() {
    // A transducer transforms a step function. Reducer signature: (acc, x) -> acc.
    using Reducer = std::function<std::vector<int>(std::vector<int>, int)>;

    auto mapping = [](auto f) {
        return [f](Reducer step) -> Reducer {
            return [f, step](std::vector<int> acc, int x) { return step(acc, f(x)); };
        };
    };
    auto filtering = [](auto pred) {
        return [pred](Reducer step) -> Reducer {
            return [pred, step](std::vector<int> acc, int x) {
                return pred(x) ? step(acc, x) : acc;
            };
        };
    };

    auto inc = mapping([](int x) { return x + 1; });
    auto evens = filtering([](int x) { return x % 2 == 0; });

    Reducer collect = [](std::vector<int> acc, int x) { acc.push_back(x); return acc; };
    // Compose: map(+1) then filter(even) -> inc(evens(collect))
    Reducer xf = inc(evens(collect));

    std::vector<int> out;
    for (int x : {1, 2, 3, 4}) out = xf(out, x);

    for (size_t i = 0; i < out.size(); ++i) {
        if (i) std::cout << ' ';
        std::cout << out[i];
    }
    std::cout << '\n';
}
