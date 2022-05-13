#include <stdio.h>

int main() {

    int n;
    while (scanf("%d", &n) != EOF) {

        int tamanho[n], i, j, contaPares = 0;
        char pe[n];

        for (i = 0; i < n; i++)
            scanf("%d %c", &tamanho[i], &pe[i]);

        for (i = 0; i < n; i++) {
            for (j = i+1; j < n; j++) {
                if (tamanho[i] == tamanho[j] && pe[i] != lado[j] && pe[i] != 'X' && pe[j] != 'X') {
                    contaPares++;
                    pe[i] = 'X';
                    pe[j] = 'X';
                }
            }
        }

        printf("%d\n", contaPares);
    }

    return 0;
}
