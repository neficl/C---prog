/*
 ============================================================================
 Name        : 1338.c
 Author      : Néfi Coelho Leite - 20190030796
 Version     : 1.0
 Description : 1338 - Joga da Velha
 ============================================================================
 */
#include <stdio.h>

int main(void) {

    int linha, coluna; //Criamos nossas duas variaveis que representam a linha e a coluna da matriz.
    char valores[3][3]; //Criamos nosso jogo da velha, ou seja, nosso array com o tamanho maximo.

    for (linha = 0; linha < 3; linha++){ //Aqui vamos adicionar os valores correspondetes a cada jogada, seja x, o ou .
        for (coluna = 0; coluna < 3; coluna++){
            scanf("%c", &valores[linha][coluna]);
            if(coluna == 2){//Temos que lembrar que a cada quebra de linha temos que limpar nosso buffer de char.
                getchar();
            }
        }
    }
        linha = 0, coluna = 0; //Nesse if's vamos analisar a vitoria vertical, horizontal e diagonal, nao importando a ordem.

            if (valores[linha][coluna] == 'X' && valores[linha+1][coluna] == 'X' && valores[linha+2][coluna] == 'X' ||
                valores[linha][coluna] == 'X' && valores[linha][coluna+1] == 'X' && valores[linha][coluna+2] == 'X' ||
                valores[linha][coluna] == 'X' && valores[linha+1][coluna+1] == 'X' && valores[linha+2][coluna+2] == 'X' ||
                valores[linha][coluna+1] == 'X' && valores[linha+1][coluna+1] == 'X' && valores[linha+2][coluna+1] == 'X' ||
                valores[linha][coluna+2] == 'X' && valores[linha+1][coluna+2] == 'X' && valores[linha+2][coluna+2] == 'X' ||
                valores[linha+1][coluna] == 'X' && valores[linha+1][coluna+1] == 'X' && valores[linha+1][coluna+2] == 'X' ||
                valores[linha+2][coluna] == 'X' && valores[linha+2][coluna+1] == 'X' && valores[linha+2][coluna+2] == 'X' ||
                valores[linha+2][coluna] == 'X' && valores[linha+1][coluna+1] == 'X' && valores[linha][coluna+2] == 'X' ||
                valores[linha][coluna+1] == 'X' && valores[linha+1][coluna+1] == 'X' && valores[linha+2][coluna+1] == 'X'  ) {

                printf("X\n"); // Caso entre nesse if, perceberemos que nosso ganhador eh o x.
                return 0;
            }else if(valores[linha][coluna] == 'O' && valores[linha+1][coluna] == 'O' && valores[linha+2][coluna] == 'O' ||
                valores[linha][coluna] == 'O' && valores[linha][coluna+1] == 'O' && valores[linha][coluna+2] == 'O' ||
                valores[linha][coluna] == 'O' && valores[linha+1][coluna+1] == 'O' && valores[linha+2][coluna+2] == 'O' ||
                valores[linha][coluna+1] == 'O' && valores[linha+1][coluna+1] == 'O' && valores[linha+2][coluna+1] == 'O' ||
                valores[linha][coluna+2] == 'O' && valores[linha+1][coluna+2] == 'O' && valores[linha+2][coluna+2] == 'O' ||
                valores[linha+1][coluna] == 'O' && valores[linha+1][coluna+1] == 'O' && valores[linha+1][coluna+2] == 'O' ||
                valores[linha+2][coluna] == 'O' && valores[linha+2][coluna+1] == 'O' && valores[linha+2][coluna+2] == 'O' ||
                valores[linha+2][coluna] == 'O' && valores[linha+1][coluna+1] == 'O' && valores[linha][coluna+2] == 'O' ){

                printf("O\n"); //Caso contrario poder ser o y.
                return 0;
            }else{

                printf("Velha\n");//Se nada der certo, quer dizer que empatamos nosso jogo e entra em cena o else.
                return 0;
            }

    return 0;
}
