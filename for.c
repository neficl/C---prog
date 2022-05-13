#include <stdio.h>

int main (){
    int i, n, fatorial;

    printf("Digite o valor de n:\n");
    scanf("%d", &n);

    fatorial = 1;

   for(i=1; i <= n; i=i+1){
        fatorial = fatorial * i;

   }

   printf("%d! = %d\n", n, fatorial);

    return 0;

}
