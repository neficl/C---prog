#include <stdio.h>

int main (void){

    int m, n, i, soma, maior, menor;

    soma = 0;

    scanf("%d %d", &m, &n);

    while(m > 0 && n > 0){
        if(m > n){
            maior = m;
            menor = n;
        }else{
            maior = n;
            menor = m;
        }
            for(i = menor; i <= maior; i = i + 1){
                    soma = soma + i;
                    printf("%d ", i);
                }
        printf("Sum=%d\n", soma);
        scanf("%d %d", &m, &n);
        soma = 0;
    }

    return 0;
}


