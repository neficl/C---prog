#include <stdio.h>

int main(void){
    int i, a, b, soma = 0;

    scanf("%d %d", &a, &b);

    while(a> 0 && b > 0){
            soma = 0;
            for(i = a; i <= b; i++){
                soma += i;
            }
            printf("%d\n", soma);
            scanf("%d %d", &a, &b);
    }
    return 0;
}
