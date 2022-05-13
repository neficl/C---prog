#include <stdio.h>
#include <stdlib.h>

int main(void){

    float x, y;
    char a, b, c, d;

    printf("Digite seu primeiro valor:\n");
    scanf("%f", &x);

    printf("Digite seu primeiro valor:\n");
    scanf("%f", &y);

    printf("Você quer Multiplicar digite\'a\', Você quer Dividir digite\'b\', Você quer Somar digite\'c\', Você quer Subtrair digite\'d\' \n");
    scanf("%c %c %c %c", &a, &b, &c, &d);

    switch (x, y){
        case('a')
        printf("%d * %d = %d\n", x, y, x * y);
        break;
        case('b')
        printf("%d / %d = %d\n", x, y, x / y);
        break;
        case('c')
        printf("%d + %d = %d\n", x, y, x + y);
        break;
        case('d')
        printf("%d - %d = %d\n", x, y, x - y);
        break;
    }

    return 0;

}
