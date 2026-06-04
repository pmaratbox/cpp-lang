#include <iostream>
#include <string>
#include <map>

int main() {
    std::map<char, int> val{{'I',1},{'V',5},{'X',10},{'L',50},
                            {'C',100},{'D',500},{'M',1000}};
    std::string r = "XIV";
    int total = 0;
    for (size_t i = 0; i < r.size(); ++i) {
        int v = val[r[i]];
        if (i + 1 < r.size() && val[r[i + 1]] > v) total -= v;
        else total += v;
    }
    std::cout << total << '\n';
}
