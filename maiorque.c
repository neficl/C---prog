#include<stdio.h>

int main(void) {
    float a, b;

    printf("Digite o valor para a: \n");
    scanf("%f", &a);
    printf("Digite o valor para b: \n");
    scanf("%f", &b);

    if (a > b){
        puts("a eh maior que b");
        printf("Digite o valor de a: %.f \n", a);
    }else{
        puts("b eh maior que a");
        printf("Digite o valor de b: %.f \n", b);
    }
return 0;
}
