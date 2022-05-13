#include <stdio.h>

int main (){
    int n, soma, contador;

   n = -1;
   soma = 0;
   contador = 0;
    while( n != 0){
        printf("Digite n: ");
        scanf("%d", &n);
        if (n != 0){
        soma = soma + n;
        contador = contador + 1;
        }
    }
     printf("Soma de todos os valores: %d\n", soma);
     printf("Foram digitados %d valores \n", contador);
    return 0;

}
