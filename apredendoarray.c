#include <stdio.h>

int main(void){
    size_t tam;

    tam = sizeof (double);

    printf("tam = %zu\n", tam);

    int array[5]={10,20,30,40,50};

    tam = sizeof (array[5]);

    printf("tam = %zu\n", tam);


    printf("O valor do array[1] eh: %d\n", array[0]);

    scanf("%d", &array[4]);

    printf("O valor do array[4] eh: %d", array[4]);

    return 0;
}

#include <stdio.h>

int main(void){
    int i, vetor[10], j;

    for(i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
            if(vetor[i]<= 0){
                vetor[i] = 1;
            }
    }
    for( j = 0; j < 10; i++){
        printf("X[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}
