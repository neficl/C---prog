#include <stdio.h>
#include <locale.h>

int main(void){

    char x, lixo;

    setlocale(LC_ALL,"Portuguese");

    x = 'n';

    while ( x == 'n'){
        printf("Digite \'s\' se chegamos ou digite \'n\' se n�o chegamos:\n");
        scanf("%c%c", &x, &lixo);

    }

    puts("Voc� Chegou!");

    return 0;
}
