/**
 ============================================================================
 Name        : Ponto mais próximo.c
 Author      : Néfi Coelho Leite - 20190030796
 Version     : 1.0
 Description : Distância mais próxima do plano.
 ============================================================================
 */

#include <stdio.h>

typedef struct{
    float x1, x2, y1, y2;
    float dist;
}tPonto;

tPonto ponto;

float Distancia(float x1, float y1, float x2, float y2) {
    return sqrt( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) );
}

int main(void){
    int n, i, mi;
    float md = 999999;

    scanf("%f %f", &ponto.x1, &ponto.y1);

    scanf("%d", &n);

    tPonto vet[n];
    for(i = 0; i < n; i++){
        scanf("%f %f", &vet[i].x2, &vet[i].y2);

        ponto.dist = Distancia(ponto.x1, ponto.y1, vet[i]. x2, vet[i].y2);
        if(ponto.dist < md){
            md = ponto.dist;
            mi = i;
        }
    }

    printf("Ponto mais perto é (%.f, %.f)\n", vet[mi].x2, vet[mi].y2);

    return 0;
}
