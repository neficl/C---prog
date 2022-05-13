#include<stdio.h>

int main(void){
    float a, b, c, d, mediaponderada;

    printf("Digite o valor da sua media do primeiro bimestre: \n ");
    scanf("%f", &a);
    printf("Digite o valor da sua media do segundo bimestre: \n ");
    scanf("%f", &b);
    printf("Digite o valor da sua media do terceiro bimestre: \n ");
    scanf("%f", &c);
    printf("Digite o valor da sua media do quarto bimestre: \n ");
    scanf("%f", &d);

        mediaponderada = (a * 1 + b *2 + c * 3 + d * 4) / (1 + 2 + 3 + 4);

    printf("Sua media ponderada = %.1f \n", mediaponderada);

return 0;
}
