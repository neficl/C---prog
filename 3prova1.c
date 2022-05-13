/*
 ============================================================================
 Name        : 1519.c
 Author      : Néfi Coelho Leite - 20190030796
 Version     : 1.0
 Description : 1519 - String Verticalmente Inversa
 ============================================================================
 */

#include <stdio.h>  //Declaramos as funções que iremos utilizar para digitação, leitura e manipulação das strings.
#include <string.h>

void RemoveBarraN(char *str){ //Função void que não retorna valor, mas através dos ponteiros é enviado seus endereços.
    if (str[strlen(str)-1] == '\n'){//Função responsável por substituir o final da linha e pula linha (\n), pelo caractere nulo que encerrará a string.
        str[strlen(str)-1] = '\0';
    }
}

int main(void){
    char str[31]; //String declarada de ate 30 caracteres, sendo o caractere 31 o caractere nulo já gereado pelo compilador, que incerrará a string.
    int i, tamanho; // Variaveis definidas para utilizarmos no tamanho da funcao e ao pecorrer o laço for.

    fgets(str, 31, stdin); //Stdin - entrada padrao, que irá armazenar o valor na variavel str.

    RemoveBarraN(str); //Chamamos a função que remove e tirar os espacos e as linhas desnecessárias.

    tamanho = strlen(str); // Funçao que retorna o tamanho da string digitada;

    for(i = tamanho - 1; i >= 0; i--){ //Utilizamos o operador de decremento para invertemos a nossa string, no processo de subtracao.
        printf("%c\n" ,str[i]);
    }

    return 0;
}
