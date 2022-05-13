#include <stdio.h>

int main (){
    int i, n;

    printf("Digite o valor de n:\n");
    scanf("%d", &n);

   for(i=1; i <= 10; i=i+1){
        printf("%2d * %d = %2d\n", i, n, i * n);
   }

    return 0;

}
