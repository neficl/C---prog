#include <stdio.h>

int main(void) {
    int linha, coluna;
    char valores[3][3];


    for (linha = 0; linha < 3; linha++){
        for (coluna = 0; coluna < 3; coluna++){
            valores[linha][coluna] = ' ';
        }
    }

    for (linha = 0; linha < 3; linha++){
        for (coluna = 0; coluna < 3; coluna++){
            scanf("%c", &valores[linha][coluna]);
            if(coluna == 2){
            getchar();
            }
        }
    }
    //if(valores[linha][coluna] == 'X' || valores[linha][coluna] == 'O' || valores[linha][coluna] == '.'){
        linha = 0, coluna = 0;

            if (valores[linha][coluna] == 'X' && valores[linha+1][coluna] == 'X' && valores[linha+2][coluna] == 'X' ||
                valores[linha][coluna] == 'X' && valores[linha][coluna+1] == 'X' && valores[linha][coluna+2] == 'X' ||
                valores[linha][coluna] == 'X' && valores[linha+1][coluna+1] == 'X' && valores[linha+2][coluna+2] == 'X' ||
                valores[linha][coluna+1] == 'X' && valores[linha+1][coluna+1] == 'X' && valores[linha+2][coluna+1] == 'X' ||
                valores[linha][coluna+2] == 'X' && valores[linha+1][coluna+2] == 'X' && valores[linha+2][coluna+2] == 'X' ||
                valores[linha+1][coluna] == 'X' && valores[linha+1][coluna+1] == 'X' && valores[linha+1][coluna+2] == 'X' ||
                valores[linha+2][coluna] == 'X' && valores[linha+2][coluna+1] == 'X' && valores[linha+2][coluna+2] == 'X' ||
                valores[linha+2][coluna] == 'X' && valores[linha+1][coluna+1] == 'X' && valores[linha][coluna+2] == 'X' ||
                valores[linha][coluna+1] == 'X' && valores[linha+1][coluna+1] == 'X' && valores[linha+2][coluna+1] == 'X'  ) {

                printf("X\n");
                return 0;
            }else if(valores[linha][coluna] == 'O' && valores[linha+1][coluna] == 'O' && valores[linha+2][coluna] == 'O' ||
                valores[linha][coluna] == 'O' && valores[linha][coluna+1] == 'O' && valores[linha][coluna+2] == 'O' ||
                valores[linha][coluna] == 'O' && valores[linha+1][coluna+1] == 'O' && valores[linha+2][coluna+2] == 'O' ||
                valores[linha][coluna+1] == 'O' && valores[linha+1][coluna+1] == 'O' && valores[linha+2][coluna+1] == 'O' ||
                valores[linha][coluna+2] == 'O' && valores[linha+1][coluna+2] == 'O' && valores[linha+2][coluna+2] == 'O' ||
                valores[linha+1][coluna] == 'O' && valores[linha+1][coluna+1] == 'O' && valores[linha+1][coluna+2] == 'O' ||
                valores[linha+2][coluna] == 'O' && valores[linha+2][coluna+1] == 'O' && valores[linha+2][coluna+2] == 'O' ||
                valores[linha+2][coluna] == 'O' && valores[linha+1][coluna+1] == 'O' && valores[linha][coluna+2] == 'O' ){

                printf("O\n");
                return 0;
            }else{
                printf("Velha\n");
                return 0;
            }
    //}else{
       // return 0;
    //}

    return 0;
}

