#include<stdio.h>

int main(void){
    int valor, quantidade, resto;

    printf("Qual o valor: \n");
    scanf("%d", &valor);

    quantidade = valor / 100;
    resto = valor % 100;
    printf("%02d notas de 100\n", quantidade);

    valor = resto;
    quantidade = valor / 50;
    resto = valor % 50;
    printf("%02d notas de 50\n", quantidade);

    valor = resto;
    quantidade = valor / 20;
    resto = valor % 20;
    printf("%02d notas de 20\n", quantidade);

    valor = resto;
    quantidade = valor / 10;
    resto = valor % 10;
    printf("%02d notas de 10\n", quantidade);

    valor = resto;
    quantidade = valor / 5;
    resto = valor % 5;
    printf("%02d notas de 5\n", quantidade);

    valor = resto;
    quantidade = valor / 2;
    resto = valor % 2;
    printf("%02d notas de 2\n", quantidade);

    valor = resto;
    quantidade = valor / 1;
    resto = valor % 1;
    printf("%02d notas de 1\n", quantidade);

    return 0;
}
