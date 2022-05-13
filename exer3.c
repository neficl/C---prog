#include <stdio.h>

int main (void){

   int a, b, numero;

    printf("Vamos ler os valores entre dois numeros que voce inserir abaixo, digite!\n");

    printf("Seu primeiro numero:");
    scanf("%d", &a);

    printf("Seu segundo numero:");
    scanf("%d", &b);

    numero = a;

    while(numero <= b){
        printf("%d\n", numero);

        numero = numero +1;
    }

    numero = b;

    while(numero <= a){
        printf("%d\n", numero);

        numero = numero +1;
    }

    return 0;

}
