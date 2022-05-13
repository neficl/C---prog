#include <stdio.h>
#include <string.h>

int main(void){
    int bilhetes, pessoas;
    int vetor[20001];
    int i, t, falsos;

    while (1) {
        scanf("%d %d", &bilhetes, &pessoas);

        if (bilhetes <= 0 && pessoas <= 0){
            break;
        }
        memset(vetor, 0, sizeof(vetor));

        for (i = 0; i < pessoas; ++i) {
            scanf("%d", &t);

            vetor[t]++;
        }
        falsos = 0;
        for (i = 1; i <= bilhetes; ++i) {
            if (vetor[i] > 1)
                falsos++;
        }

        printf("%d\n", falsos);
    }

    return 0;
}
