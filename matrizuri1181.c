#include <stdio.h>

int main(void) {
    int l, i, j;
    char op;
    double m[12][12], soma = 0;

    scanf("%d", &l);
    scanf(" %c", &op);

    for (i = 0; i < 12; i++) {

        for (j = 0; j < 12; j++) {

            scanf("%lf", &m[i][j]);

            if (i == l)
                soma += m[l][j];

        }
    }
    if (op == 'M')
        soma /= 12;

    printf("%.1lf\n", soma);

    return 0;
}
