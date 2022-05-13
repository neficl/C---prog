#include<stdio.h>

int main(void) {
    float a, b;

    printf("Digite o valor para a: \n");
    scanf("%f", &a);
    printf("Digite o valor para b: \n");
    scanf("%f", &b);

    if (a == b){
        puts("Esse numeros sao iguais");

    }else{
    if (a > b){
        puts("a eh maior que b");
    }else{
    puts("b eh maior que a");
    }
}
return 0;
}
