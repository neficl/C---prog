#include <stdio.h>

int main (void){

    int x, n;

    scanf("%d", &n);

    x = -10000000;
    do {
        if (n % 2 == 0 && n >= 1){
            printf("EVEN POSITIVE\n");
        } else if (n % 2 == 0 && n <= -1){
            printf("EVEN NEGATIVE\n");
        } else if (n == 0){
            printf("NULL\n");
        } else if (n % 2 == - 1 && n <= -1){
            printf("ODD NEGATIVE\n");
        } else{
            printf("ODD POSITIVE\n");
        }
         scanf("%d", &n);

    } while ( x <= n);

    return 0;
}
