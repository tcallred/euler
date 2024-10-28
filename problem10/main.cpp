#include <iostream>

int main() {
    int64_t sum = 0;
    for (int i = 2; i < 2000000; i++) {
        bool is_prime = true;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            sum += i;
        }
    }
    std::cout << sum << '\n';
}
