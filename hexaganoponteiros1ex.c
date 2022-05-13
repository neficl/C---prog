/**
 ============================================================================
 Nome      : Hexágono Ponteiros!
 Autor     : Néfi
 Versao    : 1.0
 Copyright : CC BY 4.0
 Descricao : Calcular area e perimetro.
 ============================================================================
 **/
void CalculaHexagono(float l, float *area, float *perimetro){ // Calculamos a area e o perimetro do hexagono com  ponteiro.

    *area = (3*l*l*sqrt(3))/2;

    *perimetro = 6*l;

    return;
}
#include <stdio.h>
#include <math.h>

int main(void) {
    float l, area, perimetro; // Determinamos as variaveis que iremos utilizar em nosso programa!

        scanf("%f", &l);

        CalculaHexagono(l, &area, &perimetro);

        printf("Area = %.2f e Perimetro = %.2f", area, perimetro);


    return 0;
}
