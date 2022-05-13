#include<stdio.h>
#include<math.h>

int main(void) {
    float a, b, c;
    float delta, x1, x2;

    printf("Digite o valor de a da equacao: \n");
    scanf("%f", &a);
    printf("Digite o valor de b da equacao: \n");
    scanf("%f", &b);
    printf("Digite o valor de c da equacao: \n");
    scanf("%f", &c);

    if (a==0){
        puts("A eh igual a zero, eh impossivel calcular as raizes. Por isso o programa esta se encerrando!");
    return 1;
}
    delta = b*b - 4*a*c;

    if (delta<0){
        puts("Delta menor que zero, nao possui nenhuma raiz real.");
    return 2;
}
    x1 = (-b + sqrt(delta)) / 2*a;
    x2 = (-b - sqrt(delta)) / 2*a;

    if (delta==0){
        printf("Delta igual a zero, apenas uma raiz: %.f \n", x1);
    } else {
        printf("O valor de x1: %.f \n", x1);
        printf("O valor de x2: %.f \n", x2);
    }
return 0;
}
