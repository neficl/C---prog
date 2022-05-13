/*
 ============================================================================
 Name        : 1519.c
 Author      : N�fi Coelho Leite - 20190030796
 Version     : 1.0
 Description : 1519 - String Verticalmente Inversa
 ============================================================================
 */

#include <stdio.h>  //Declaramos as fun��es que iremos utilizar para digita��o, leitura e manipula��o das strings.
#include <string.h>

void RemoveBarraN(char *str){ //Fun��o void que n�o retorna valor, mas atrav�s dos ponteiros � enviado seus endere�os.
    if (str[strlen(str)-1] == '\n'){//Fun��o respons�vel por substituir o final da linha e pula linha (\n), pelo caractere nulo que encerrar� a string.
        str[strlen(str)-1] = '\0';
    }
}

int main(void){
    char str[31]; //String declarada de ate 30 caracteres, sendo o caractere 31 o caractere nulo j� gereado pelo compilador, que incerrar� a string.
    int i, tamanho; // Variaveis definidas para utilizarmos no tamanho da funcao e ao pecorrer o la�o for.

    fgets(str, 31, stdin); //Stdin - entrada padrao, que ir� armazenar o valor na variavel str.

    RemoveBarraN(str); //Chamamos a fun��o que remove e tirar os espacos e as linhas desnecess�rias.

    tamanho = strlen(str); // Fun�ao que retorna o tamanho da string digitada;

    for(i = tamanho - 1; i >= 0; i--){ //Utilizamos o operador de decremento para invertemos a nossa string, no processo de subtracao.
        printf("%c\n" ,str[i]);
    }

    return 0;
}
