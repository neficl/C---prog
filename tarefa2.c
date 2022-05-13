#include <stdio.h>

int main (void){

    int i;

    for (i = 1; i <= 1000; i = i + 1){
        if (i % 10 == 4 && i % 6 == 0){
        printf("\n %4d", i);
        }
    }

    return 0;

}
