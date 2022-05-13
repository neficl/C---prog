/**
 ============================================================================
 Name        : Soma de Matrizes.c
 Author      : Néfi Coelho Leite - 20190030796
 Version     : 1.0
 Description : Soma de duas matrizes inteiras.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, j, a, b;

    scanf("%d %d", &a, &b);

    int matrizA[a][b], matrizB[a][b], matrizSoma[a][b];

    for(i = 0; i < a; i++){
        for(j = 0; j < b; j++){
            scanf("%d", &matrizA[i][j]);
        }
    }
    for(i = 0; i < a; i++){
        for(j = 0; j < b; j++){
            scanf("%d", &matrizB[i][j]);
        }
    }
    for(i = 0; i < a; i++){
        for(j = 0; j < b; j++){
            matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
    for(i = 0; i < a; i++){
        for(j = 0; j < b - 1; j++){
            printf("%d ", matrizSoma[i][j]);
        }
            printf("%d\n", matrizSoma[i][j]);
    }

    return 0;
}
