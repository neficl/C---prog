#include <stdio.h>

int main(){
    int n,i,posicao,maior;

    posicao = 0;

    scanf("%i", &n);

    maior = n;

    for (i=1; i<100; i++){
        scanf("%d", &n);
        if (n >maior) {
            maior = n;
            posicao = i;
        }
    }
    printf("%d\n%d\n",maior,posicao + 1);
    return 0;
}
