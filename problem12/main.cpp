#include <stdio.h>
#include <iostream>
int main() {
    long trinum = 0;
    for (long i = 1; ; i++) {
        trinum += i;
        printf("trinum: %ld\n", trinum);
        if (sqrt(trinum) > 10000) {
            int divisors = 1;
            for (long j = 1; j <= sqrt(trinum); j++) {
                if (trinum % j == 0) {
                    divisors++;
                }
            }
            if (divisors == 500) {
                printf("found solution: %ld\n", trinum);
                break;
            }
        }
    }
}