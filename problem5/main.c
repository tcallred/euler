#include <stdio.h>

int main(){
    long n = 20;
    while (1) {
        int all_divisible = 1;
        for (int i = 1; i <= 20; i++) {
            if (n % i != 0) {
                all_divisible = 0;
                break;
            }
        }
        if (all_divisible) {
            printf("%ld\n", n);
            return 0;
        }
        n++;
    }
}
