#include <stdio.h>

int main (){
    int i, n, soma;

    printf("Digite o valor de n:\n");
    scanf("%d", &n);

    soma = 0;

   for(i=1; i <= n; i=i+1){
        soma = soma + i;

   }

   printf("A soma total de 1 a %d foi de:%d\n", n, soma);

    return 0;

}
