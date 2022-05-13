#include <stdio.h>
#include <math.h>

int main(){
    int vezes, casas, i;
    long long grao;

    scanf("%d", &vezes);

    for(i = 0; i < vezes; i++){
            scanf("%d", &casas);
            grao = (pow(2,casas)/12000);
            printf("%lld kg\n", grao);
    }

    return 0;
}
