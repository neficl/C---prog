#include <stdio.h>

int main (void){
    int A, B; // Definimos nossas duas variáveis inteiras A e B.

    scanf("%d\n%d", &A, &B); // Nossas variáveis são digitadas e armazenadas.

    do{
        if(A == B){ // Analisamos em primeiro comando if se os valores são iguais, caso contrário seguiremos para a próxima linha de comando, até o final do bloco do while.
            printf("A e B sao iguais.\n");
            break; // Utilizamos o break para parar nosso laço de repetição
        }else if(A > B && A % 2 == 0){ // Analisamos se o número corresponde a A é maior e par.
            printf("A eh maior e PAR.\n");
            break;
        }else if(A > B && A % 2 == 1){ // Analisamos se o número corresponde a A é maior e impar.
            printf("A eh maior e IMPAR.\n");
            break;
        }if(B > A && B % 2 == 0){ // Analisamos se o número corresponde a B é maior e par.
            printf("B eh maior e PAR.\n");
            break;
        }else{ // Analisamos se o número corresponde a B é maior e impar.
            printf("B eh maior e IMPAR.\n");
            break;
            }
    } while (1 <= A >= 100 && 1<= B <= 100); // Avaliamos se o laço Do While é verdadeiro, conforme o valor de A e B.

    return 0;

}
