#include<stdio.h>

int main(void){
    int b, h;
    float area;

    printf("Digite o valor da base do triangulo: \n ");
    scanf("%i", &b);
    printf("Digite o valor da altura do triangulo: \n ");
    scanf("%i", &h);

        area = (b * h) / 2;

    printf("A area do seu triangulo = %.0f \n", area);

return 0;
}
