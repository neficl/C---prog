/**
 ============================================================================
 Nome      : Equação do 2 grau com ponteiro!
 Autor     : Néfi
 Versao    : 1.0
 Copyright : CC BY 4.0
 Descricao : Encontrar as soluções da equação!
 ============================================================================
 **/
float ResolveEquacao2Grau(float a, float b, float c, float *x1, float *x2){ // Resolveremos a equacao.
    float delta = 0;

    delta = b*b - 4*a*c;

    *x1 = (-b + sqrt(delta)) / (2*a);

    *x2 = (-b - sqrt(delta)) / (2*a);

    return delta;
}
#include <stdio.h>
#include <math.h>

int main(void) {
    float a, b, c; // Determinamos as variaveis que iremos utilizar em nosso programa!
    float delta, x1, x2;

        printf("Digite o valor de a da equacao: \n"); // A partir dessa linha, nos recebemos os valores dos coeficientes e guardamos em nossa memoria.
        scanf("%f", &a);
        printf("Digite o valor de b da equacao: \n");
        scanf("%f", &b);
        printf("Digite o valor de c da equacao: \n");
        scanf("%f", &c);

    if (a == 0){ // Analisamos se o nosso a é igual a zero, se sim retornamos a 1.
        return -1;
    }

    delta = ResolveEquacao2Grau(a, b, c, &x1, &x2); // Aqui nos encontramos o valor do Delta, atraves dos coeficientes e chamamos a função, com os ponteiros!

    if(delta < 0){  // Analisamos se o nosso delta é negativo, logo não podemos calcular as raizes.
        return -2;
    }

    return 0;
}
