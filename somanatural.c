#include <stdio.h>

int main(void){

    int i, soma, a, b, menor, maior;

    scanf("%d %d", &a, &b);

   if(a>b){
    a = maior;
    b = menor;
   } else{
    b = maior;
    a = menor;
   }

   for(i = menor; i <= maior; soma = i + 1){
        printf("%d", soma);
   }

    return 0;
}
