#include <stdio.h>

int main(void){
    int i, a, b, soma = 0, aux;

    do{
        printf("Digite a e b: ");
        scanf("%d %d", &a, &b);

        if (a > 0 && b > 0){
            if (a > b){
                aux = a;
                a = b;
                b = aux;
            }
            soma = 0;
            for(i = a; i <= b; i++){
                soma += i;
            }
            printf("%d\n", soma);
        }
    }while(a > 0 && b > 0);

    return 0;
}
