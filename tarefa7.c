#include <stdio.h>
#include <stdlib.h>

int main (void){

    char x;
    int t, r, n, u, s, i; // t=primeiro termo. r=razão. n=numero de termos. u=ultimo termo. s=soma dos termos.

    printf("Digite \'a\' se a progessao eh aritmetica ou digite \'g\' se a progressao eh geometrica:\n");
    scanf("%c", &x);

    printf("Digite o primeiro termo termo da progressao:\n");
    scanf("%d", &t);

    printf("Digite a razao da progressao:\n");
    scanf("%d", &r);

    printf("Digite a quantidade de termos da progressao:\n");
    scanf("%d", &n);

    if (x == 'a'){
    u = t + (n - 1) * r;
    s = ((t + u) * r) / 2;
    printf("A soma dos elementos da progressao eh: %d\n", s);
    }
    for(i = t; i <= u; i = i + r){
        if  (x == 'a'){
            puts("Os termos da PA sao:");
            printf("%d\n", i);
        }
    }

    if (x== 'g'){
    s = (t * (r * n - 1)) / (r - 1);
    printf("A soma dos elementos da progressao eh: %d\n", s);
    }
    for(i = t; i <= n; i = i + r){
        if  (x == 'g'){
            puts("Os termos da PG sao:");
            printf("%d\n", i);
        }
    }

    return 0;
}
