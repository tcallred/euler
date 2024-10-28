#include <iostream>
#include <cassert>
#include <set>
#include <tuple>

static std::set<std::tuple<int, int, int>> done;

void find_pyth_triplet(int a, int b, int c) {
    if (done.contains({a, b, c})) {
        return;
    }
    if (a >= b || b >= c) {
        return;
    }
    done.insert({a, b, c});
    if (a*a + b*b == c*c) {
        std::cout << "Found: " << a << " " << b << " " << c << "\n";
        std::cout << "Product: " << a * b * c << "\n";
        return;
    }
    find_pyth_triplet(a, b + 1, c - 1);
    find_pyth_triplet(a + 1, b, c - 1);
};

int main() {
    find_pyth_triplet(1, 2, 997);
    std::cout << "Finished" << "\n";
    std::cout << "Nodes: " << done.size() << "\n";
}