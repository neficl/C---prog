#include <stdio.h>

int main (void){

    int numero, soma, total;
    float media;

    numero = 1;
    soma = 0;
    total = 0;

    while(numero != 0){
          printf("Digite um numero, zero finaliza o programa: ");
          scanf("%d", &numero);

    if(numero !=  0){
            soma = soma + numero;
            total = total + 1;
       }
    }

    media = (soma * 1) / total;
    printf("A media e %.1f", media);

    return 0;

}
