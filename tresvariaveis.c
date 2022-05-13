#include<stdio.h>

int main(void) {
    float a, b, c;

    printf("Digite o valor para a: \n");
    scanf("%f", &a);
    printf("Digite o valor para b: \n");
    scanf("%f", &b);
    printf("Digite o valor para c: \n");
    scanf("%f", &c);

    if (a > b){
        puts("a eh maior que b");
    }else{
        puts("b eh maior que a");
}
    if (a > c){
        puts("a eh maior que c");
    }else{
        puts("c eh maior que a");
}
    if (b > c){
        puts("c eh maior que c");
    }else{
        puts("c eh maior que b");
}
return 0;
}
