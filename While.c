#include <stdio.h>

int main (){
    int a, contador;

    a = 1;
    contador = 0;
    while (a != 5) {
            printf("Digite o numero da sorte: \n");
            scanf("%d", &a);
        if ( a>5 ) {
            puts("Muito Alto, tente de novo!");
        } else if (a<5) {
            puts("Muito Baixo, tente de novo!");
        } else{
            printf("Voce acertou!\n");
        }
        contador = contador + 1;
    }

        printf("Foram feitos %d palpites ate acertar o numero da sorte!\n", contador);

    return 0;

}
