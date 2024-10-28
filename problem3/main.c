#include <stdio.h>

int main(){
    long long n = 600851475143;
    int largest_prime = -1;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            largest_prime = i;
            n = n / i;
        }
    }
    if (n > 1) {
        largest_prime = n;
    }
    printf("%d\n", largest_prime);
}
