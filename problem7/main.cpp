#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<long> primes = {2, 3, 5, 7, 11, 13};
    for (long i = 14; primes.size() < 10001; i++) {
        bool is_prime = std::all_of(primes.begin(), primes.end(), [i](long p) { 
            return i % p != 0;
        });
        if (is_prime) {
            primes.push_back(i);
        }
    }
    std::cout << primes.back() << "\n";
}
