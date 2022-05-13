#include <stdio.h>

int main (){
    int i, max;

    printf("Digite o valor maximo: ");
    scanf("%d", &max);

    i = 1;
    while(i <= max){
        if (i%2 == 0)
        printf("%d\n", i);
        i = i + 1;

    }

    return 0;

}
