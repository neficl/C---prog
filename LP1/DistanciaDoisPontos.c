/**
 ============================================================================
 Name        : Distância entre dois pontos.c
 Author      : Néfi Coelho Leite - 20190030796
 Version     : 1.0
 Description : Quadrado da distância entre dois pontos.
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

    scanf("%f %f %f %f", &ponto.x1, &ponto.y1, &ponto.x2, &ponto.y2);

    ponto.dist = Distancia(ponto.x1, ponto.y1, ponto.x2, ponto.y2);

    printf("%.f", ponto.dist * ponto.dist);

    return 0;
}
