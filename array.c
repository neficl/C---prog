#include <stdio.h>
int main(void){

    int ar[9] = {1,2,3,4,5,6,7,8,9}, i, j, *p;

    p = &ar;

        for (i = 0; i < 9; i++) {
            printf("Iniciando o elemento #%d com valor %d\n", i + 1, ar[i]);

        }
    return 0;

}
