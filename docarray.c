#include <stdio.h>
/*int soma(int *a, int *b){
    *a = *a + *b;
    return *a;
}*/

int main (void){
    /*
    int vetor[] = {1867,1947,2007};
    int *ano;
    ano = &vetor[0];
    ano++;
    printf("Valos: %d ", *ano);
    (*ano)++;
    printf("Valos: %d \n", *ano);

    int a, *b, c;
    a = 5;
    b = &a;
    c = 10;
    scanf("%d", b);
    printf("%d %d\n", a, c);

    int x = 5, y =3;
    y = soma(&x, &y);
    printf("%d\n", x);

    int matrx[5] ={1,2,3,4,5};
    int *p;
    p = matrx;

    printf("3ro elem: %d\n", p[2]);

    int ar[] = {1,2,3};
    int *p = &ar[0];

    printf("%d %d %d %d\n", ar[0], p[0], *p, *ar);
    */

    int ar[5]={1,2,3,4,5};
    int *p, a, b, c, d;

    a = ar[0] + ar [4];
    p = &ar[2];
    b = *p * 2;
    c = p[1];
    d = 2[ar];

    printf("a = %d, b = %d, c = %d e d = %d.\n", a, b, c, d);

    return 0;
}
