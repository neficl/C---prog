#include<stdio.h>

int main(void) {
    float h, pm, pf;
    char sx;

    printf("Qual eh o seu sexo \'m\' para masculino e \'f\' para feminino: \n");
    scanf("%c", &sx);
    printf("Qual a sua altura: \n");
    scanf("%f", &h);

     pm = (72.7 * h) - 58;
     pf = (62.1 * h) - 44.7;

    if(sx == 'm'){
        printf("Seu peso ideal eh: %.2f \n", pm);
    }else{
        printf("Seu peso ideal eh: %.2f \n", pf);
    }
return 0;
}
