#include <stdio.h>

int main(void) {

    long long int N, i, estrelasAtacadas = 0, carneirosRestantes = 0;
    scanf("%llu", &N);

    long long int valores[N], Igual[N];

    for (i = 0; i < N; i++) {
        scanf("%llu", &valores[i]);
        Igual[i] = 0;
    }

    i = 0;
    while (i >= 0 && i < N) {

        if (valores[i] == 0){
            i--;

        }else {

            valores[i]--;
            Igual[i] = 1;

            if (valores[i] & 1){
                i--;

            }else{
                i++;
            }
        }
    }

    for (i = 0; i < n; i++) {

        carneirosRestantes += valores[i];

        if (Igual[i])
            estrelasAtacadas++;
    }

    printf("%llu %llu\n", estrelasAtacadas, carneirosRestantes);

    return 0;
}
