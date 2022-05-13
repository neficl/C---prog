/**
 ============================================================================
 Nome      : 1-Media.c
 Autor     : Nefi
 Versao    : 1.0
 Copyright : CC BY 4.0
 Descricao : Media de cada valor inserido.
 ============================================================================
 **/
#include <stdio.h>

double AdicioneNaMedia(double valor){
    static int contador; // Colocamos duas variaveis fixas para continuar nossa contagem e tambem mantermos o valor anterior;
    static double total;
    contador++;

    total = valor + total; // total += valor;

    return total/ contador;
}

int main(void){
    double valor, media; // Adicionamos as variaveis de valores inseridos, do valor/nota adicionado, a media dos valores e o i do nosso laço for - que faz a contagem até os valores definidos.
    int i, valores;

    printf("Quantos valores serao inseridos: "); // Recebemos a quantidade e os valores a partir dessa linha;
    scanf("%d", &valores);

    for(i=1; i <= valores; i++){
        printf("\nDigite sua nota: ");
        scanf("%lf", &valor);

        media = AdicioneNaMedia(valor);
        printf("\nSua media eh: %.2lf", media); // Relatamos a media atual!

    }

    return 0;
}
