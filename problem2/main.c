#include <stdio.h>

int main() {
    int sum = 0;
    int a = 1;
    int b = 1;
    int nxt = a + b;
    while (nxt < 4000000) {
        if (nxt % 2 == 0) {
            sum += nxt;
        }
        a = b;
        b = nxt;
        nxt = a + b;
    }
    printf("%d\n", sum);
}
