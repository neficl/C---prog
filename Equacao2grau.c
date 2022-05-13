/**
 ============================================================================
 Nome      : Equação do 2 grau!
 Autor     : Néfi
 Versao    : 1.0
 Copyright : CC BY 4.0
 Descricao : Encontrar as soluções da equação!
 ============================================================================
 */
float Delta(float a, float b, float c){ // Funcao do Delta, porem apenas guardamos na memoria para executar as funcoes das raizes.
    float delta = 0;

    delta = b*b - 4*a*c;

    return delta;
}

float RaixX1(float a, float b, float delta){
    float x1 = 0;

     x1 = (-b + sqrt(delta)) / (2*a);

    return x1;
}

float RaixX2(float a, float b, float delta){
    float x2 = 0;

     x2 = (-b - sqrt(delta)) / (2*a);

     return x2;
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

    if (a == 0){ // Analisamos se o nosso a é igual a zero, se sim enviamos uma mensagem expicando o fim do programa.
        puts("A eh igual a zero, eh impossivel calcular as raizes. Por isso o programa esta se encerrando!");
        return 1;
    }

    delta = Delta(a, b, c); // Aqui nos encontramos o valor do Delta, atraves dos coeficientes e chamamos a função!

    if(delta < 0){  // Analisamos se o nosso delta é negativo, se sim enviamos uma mensagem expicando o fim do programa.
        printf("Delta eh negativo, as raizes nao podem ser calculadas!");
        return 2;
    }

    x1 = RaixX1(a, b, delta); // A partir desse comando, nos chamamos as raizes 1 e 2. Conforme a funcao.

        printf("O valor de x1: %.f \n", x1);

    x2 = RaixX2( a, b, delta);

        printf("O valor de x2: %.f \n", x2);

return 0;
}
