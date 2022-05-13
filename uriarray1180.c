#include <stdio.h>

int main(void){
    int i, j, cont, x;

        scanf("%d", &x);

    int vetor[x];

    for(i = 0; i < x; i++){
        scanf("%d", &vetor[i]);
        j = vetor[0];
    }
    for(i = 0; i < x; i++){
        if(j > vetor[i]){
            j = vetor[i];
            cont = i;
        }
    }
        printf("Menor valor: %d\n", j);
        printf("Posicao: %d\n", cont);

    return 0;
}
