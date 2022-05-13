/*
 ============================================================================
 Name        : 1337.c
 Author      : Néfi Coelho Leite - 20190030796
 Version     : 1.0
 Description : 1337 - Bolha Decrescente
 ============================================================================
 */

#include <stdio.h>

void OrdenarArray(int ar[], int tamanho){ //Criamos uma funcao para ordenar nosso array decrescente recebemos parâmetros que somente sao alterados na funcao principal.
    int i, aux, j; //Definimos variaveis para executar nossos laços.

    for (i = 0; i < tamanho; i++){ // Utilizamos dois laços para armazenamos o valor anterior e comparar ao proximo.
        for (j = i; j < tamanho; j++){
            if (ar[i] < ar[j]){ //Na condição if fazemos essa comparação, para verificarmos nossa ordenacao.
                aux = ar[i];
                ar[i] = ar[j];
                ar[j] = aux;
            }
        }
    }

}

int main(void){

    int ar[100]; //Definimos o nosso array com sua maior capacidade depois vamos mudar seu tamanho conforme o numero digitado.
    int i, tamanho, contador = 1;

        scanf("%d", &tamanho); //Recebemos o real tamanho do array.

        for(i = 0; i < tamanho; i++){
            scanf("%d", &ar[i]); //Recebemos seus valores.
        }

        OrdenarArray(ar, tamanho);

        for (i = 0; i < tamanho; i++){//Imprimos os valores decrescentes do array.
            if(i == 0){
                printf("%d", ar[i]);
            }else{
                printf(" %d", ar[i]);
            }
        }

        puts("");

        printf("%d\n", contador);

    return 0;
}
