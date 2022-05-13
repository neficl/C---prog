#include <stdio.h>

void AcessoIndireto(int *n){
    printf("n = %p\n", n);
    *n = 7;
}
int main (void){
    int a, *p;
    double x, *q;

    a = 5;
    x = 1.5;

    p = &a;
    q = &x;

    AcessoIndireto(&a);

    printf("a =  %d\n", a);
    printf("end a =  %p\n", &a);
    printf("x =  %lf\n", x);

    printf("p =  %p\n", p);
    printf("*p =  %d\n", *p);


    return 0;
}
