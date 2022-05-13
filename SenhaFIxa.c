#include <stdio.h>

int main (void){

    int s;

    scanf("%d", &s);

    do{
        printf("Senha Invalida\n", s);
        scanf("%d", &s);
    } while( s!= 2002);

        printf("Acesso Permitido\n");
        scanf("%d", &s);

    return 0;
}
