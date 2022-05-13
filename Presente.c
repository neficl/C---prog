#include <stdio.h>

int main (void){
    float a, b, c;

    scanf("%f %f %f", &a, &b, &c);

    if (a == c || a == b || b == c){
        puts("S");
    } else if(a + b == c || a + c == b || b + c == a){
        puts("S");
    } else {
        puts("N");
    }

    return 0;
}
