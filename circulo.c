#include<stdio.h>

int main(void){
    float diametro, raio, area, perimetro;

    printf("Digite o valor do diametro do circulo: \n ");
    scanf("%f", &diametro);

        raio = diametro / 2 ;
        area = 3.14 * raio * raio ;
        perimetro = 2 * 3.14 * raio ;

    printf("O valor do raio eh = %.1f \n", raio);
    printf("O valor da area eh = %.1f \n", area);
    printf("O valor do perimetro eh = %.1f \n", perimetro);

return 0;
}
