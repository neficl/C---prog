#include <stdio.h>

int main(void){
    int a, b, c, d;
    int x, y, m, n;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    x = c + d;
    y = a + b;
    m = a / 2;
    n = a % 2;
    if (b > c){
        if (d > a){
            if (x > y){
                if (0 < c && d > 0){
                    if ( n == 0){
                        printf("Valores aceitos\n");

            } else {
            printf("Valores nao aceitos\n");
            }
            } else {
            printf("Valores nao aceitos\n");
            }
            } else {
            printf("Valores nao aceitos\n");
            }
            } else {
            printf("Valores nao aceitos\n");
            }
            } else {
            printf("Valores nao aceitos\n");
            }

    return 0;
}
