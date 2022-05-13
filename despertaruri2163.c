#include <stdio.h>

int main() {
    int n, m, linha, coluna, flag = 1;
    scanf("%i %i", &n, &m);

    int valores[n][m];
    for (linha = 0; linha < n; linha++)
        for (coluna = 0; coluna < m; coluna++)
            scanf("%i", &valores[linha][coluna]);

    for (linha = 1; linha < n - 1; linha++) {
        for (coluna = 1; coluna < m - 1; coluna++) {
            if (valores[linha][coluna] == 42 && valores[linha-1][coluna] == 7
            && valores[linha+1][coluna] == 7 && valores[linha][coluna-1] == 7
            && valores[linha][coluna+1] == 7 && valores[linha-1][coluna-1] == 7
            && valores[linha-1][coluna+1] == 7 && valores[linha+1][coluna-1] == 7
            && valores[linha+1][coluna+1] == 7) {
                printf("%i %i\n", linha+1, coluna+1);
                flag = 0;
                break;
            }
        }
    }
    if (flag)
        printf("0 0\n");

    return 0;
}
