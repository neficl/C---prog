/*
 ============================================================================
 Name        : 1337.c
 Author      : Néfi Coelho Leite - 20190030796
 Version     : 1.0
 Description : 1337 - Bolha Decrescente
 ============================================================================
 */

#include <stdio.h>

int main(void){

    int ar[100]; //Definimos o nosso array com sua maior capacidade depois vamos mudar seu tamanho conforme o numero digitado.
    int i, tamanho, contador = 1;

        scanf("%d", &tamanho); //Recebemos o real tamanho do array.

        for(i = 0; i < tamanho; i++){
            scanf("%d", &ar[i]); //Recebemos seus valores.
        }

       int trocou, aux;

        while(trocou){
            trocou = 0;
            for(i = 0; i < tamanho - 1; i++){
                if (ar[i] < ar[i+1]){ //igualamos o primeiro elemento com o proximo caso contrario, o numero ja sera decrescente.
                    aux = ar[i] - ar[i+1];
                    ar[i+1] = aux + ar[i+1];
                    ar[i] = ar[i+1] - aux;
                    trocou++;
                }
            }
            contador++;
        }

        for (i = 0; i < tamanho; i++){//Imprimos os valores decrescentes do array.
            if(i == 0){
                printf("%d", ar[i]);
            }else{
                printf(" %d", ar[i]);
            }
        }
        puts("");
        printf("%d", contador);

    return 0;
}
