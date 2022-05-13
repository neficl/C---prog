#include <stdio.h>

int main(void){
    int i, vetor[10], v, s;

        scanf("%d", &v);
    s = v;
    if(v <= 50){
        for(i = 1; i < 10; i++){
            vetor[i]= v * 2;
            v = vetor[i];
        }
        printf("N[0] = %d\n", s);
        for( i = 1; i < 10; i++){
            printf("N[%d] = %d\n", i, vetor[i]);
        }
    }
    return 0;
}
