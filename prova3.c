#include <stdio.h>

int main (void){
    int A, B; // Definimos nossas duas vari�veis inteiras A e B.

    scanf("%d\n%d", &A, &B); // Nossas vari�veis s�o digitadas e armazenadas.

    do{
        if(A == B){ // Analisamos em primeiro comando if se os valores s�o iguais, caso contr�rio seguiremos para a pr�xima linha de comando, at� o final do bloco do while.
            printf("A e B sao iguais.\n");
            break; // Utilizamos o break para parar nosso la�o de repeti��o
        }else if(A > B && A % 2 == 0){ // Analisamos se o n�mero corresponde a A � maior e par.
            printf("A eh maior e PAR.\n");
            break;
        }else if(A > B && A % 2 == 1){ // Analisamos se o n�mero corresponde a A � maior e impar.
            printf("A eh maior e IMPAR.\n");
            break;
        }if(B > A && B % 2 == 0){ // Analisamos se o n�mero corresponde a B � maior e par.
            printf("B eh maior e PAR.\n");
            break;
        }else{ // Analisamos se o n�mero corresponde a B � maior e impar.
            printf("B eh maior e IMPAR.\n");
            break;
            }
    } while (1 <= A >= 100 && 1<= B <= 100); // Avaliamos se o la�o Do While � verdadeiro, conforme o valor de A e B.

    return 0;

}
