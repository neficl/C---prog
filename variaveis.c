#include <stdio.h>

int main(void){
    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("\n Os valores lidos para a e b foram: %d e %d\n", a, b);

    a = b + a;
    b = a - b;
    a = a - b;

    printf("\n Os novos valores de a e b sao: %d e %d\n", a, b);

    return 0;
}
