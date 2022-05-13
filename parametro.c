#include <stdio.h>

void Troca(int x, int y){
    int aux = x;
    x = y;
    y = aux;

    return;
}

int main(void){
    int a, b;
    a = 3, b = 5;
    int *p;

    printf("Antes - a=%d e b=%d\n", a, b);
    p = &a;
    printf("p =%d\n", *p);
    Troca(a,b);
    printf("Depois - a=%d e b=%d\n", a, b);

    return 0;
}
