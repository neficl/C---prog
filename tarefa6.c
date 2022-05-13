#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int palpite, correto, contador;

	srand(time(NULL));
	correto = rand() % 100;

    puts("Voce tem 5 tentativas para acertar!");

	contador = 0;
	palpite = -1;
	while (palpite != correto) {
        printf("Adivinhe o numero: ");
        scanf("%d", &palpite);

            if (palpite > correto){
                puts("Palpite alto!");
            }else if (palpite < correto){
                puts("Palpite foi baixo!");
            }
                contador = contador + 1;
                printf("Sua %d tentativa!\n", contador);
            if (contador==5){
                printf("Desculpa, acabou suas tentativas!\n");
            }
	}

    puts("Voce acertou!");
    printf("Foram feitos %d palpites ate acertar!\n", contador);
	return 0;
}
