#include <stdio.h>

int main (void){

    int i;

    i = 2;
    while(i <= 100){
        printf("%d", i);
        scanf("%d", &i);
        i = i + 2;
    }

    return 0;
}
