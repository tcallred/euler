#include <stdio.h>

int main(){
    int a, b, c;

    for(c = 1; c < 1000; c++) {
        for(b = 1; b < c; b++) {
            for(a = 1; a < b; a++){
                if(a + b + c == 1000 && a*a + b*b == c*c){
                    printf("%d\n", a*b*c);
                    return 0;
                }
            }
        }
    }
    return 0;
}