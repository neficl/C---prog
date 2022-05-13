#include <stdio.h>

int main (void){

    int n, i, x;

    printf("Digite um numero natural para saber se ele eh primo ou nao:\n");
    scanf("%d", &n);

    x = 0;

    for(i = 1; i <= n; i = i + 1){
        if(n % i == 0){
            x = x + 1;
        }
        if (x == 2) {
            puts("Esse numero eh primo!");
        }
    }
    if (x != 2){
        puts("Esse numero nao eh primo!");
    }
    return 0;
}

