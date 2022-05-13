#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
    float x, y;
    int z, op;

    printf("Digite o valor da variavel x: \n");
        scanf("%f", &x);
    printf("Digite o valor da variavel y: \n");
        scanf("%f", &y);
    printf("Digite 1 para usar a calculadora ou 0 para encerrar o programa: \n");
        scanf("%d", &z);
    printf("Digite o numero da operacao: %d\n 1 - Somar.\n 2 - Subtrair.\n 3 - Multiplicar.\n 4 - Dividir.\n");
        scanf("%d", &op);

        switch(op){
            case 1:
                printf("x + y = %f\n", x + y);
            break;
            case 2:
                printf("x - y = %f\n", x - y);
            break;
            case 3:
                printf("x * y = %f\n", x * y);
            break;
            case 4:
                printf("x / y = %f\n", x / y);
            break;
            default:
                printf("Numero errado, tente novamente!\n");
            break;
        }


    return 0;
}
