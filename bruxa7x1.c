#include <stdio.h>

#define bruxa 256

int main(void)
{
    char jogo[bruxa] = {0};
    int n, repete, i;

    do {
        fgets(jogo, bruxa, stdin);
        if (scanf(jogo, "%d", &n) != 1) {
            repete = 1;
        } else {
            repete = 0;
        }
    } while (repete);

    printf("O numero que voce digitou %d\n", n);

    /* Troca todos os 7 por 0s */
    for (i = 0; jogo[i] || i < bruxa; i++) {
        if (jogo[i] == '7')
            jogo[i] = '0';
    }

    scanf(jogo, "%d", &n);
    printf("%d\n", n);
    getchar();
    return(0);
}
