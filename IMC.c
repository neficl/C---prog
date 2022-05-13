#include<stdio.h>

int main(void){
    float peso, altura, imc;

    printf("Digite o valor do seu peso: \n ");
    scanf("%f", &peso);
    printf("Digite o valor da sua altura: \n ");
    scanf("%f", &altura);

        imc = peso / (altura * altura);
    printf("Seu Indice de Massa corporal ou IMC = %.2f \n", imc);

return 0;
}
