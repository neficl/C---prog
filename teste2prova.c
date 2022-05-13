#include <stdio.h>

int main() {
    int n, m;    /*Para guarda as vari�veis que ir�o determinar o intervalo*/
    int p;       /*Para guarda o valor inteiro que determinar� se os n�meros mostrados
                  * no intervalo s�o por ou �mpar*/

    scanf("%d", &m);
    scanf("%d", &n);
    scanf("%d", &p);

    /*Esse desvio serve para determinar a partir de que valor o intervalo ir� come�a, ou se v�o ser iguais
     *e o intervalo s� tiver um valor*/
    if(n > m) {

        /*Esse la�o while ir� permitir que sejam impressos os valores de m a n*/
        while(m <= n) {
            /*Esse desvio condicional ir� fazer com que sejam imprimidos valores de m par quando
             *for verdadeiro e impar quando falso*/
            if(p % 2 == 0){

                if(m % 2 == 0) {

                    /*Esse desvio serve para determinar se o �ltimo valor do intervalo vai ser
                     *par ou �mpar*/
                    if(n % 2 != 0) {

                        /*Esse desvio ir� diferenciar os primeiros valores do intervalo dos �ltimos*/
                        if(n - m == 1) {
                            printf("%d.\n", m);

                        }else if(n - m == 3) {
                            printf("%d e ", m);

                        }else {
                            printf("%d, ", m);

                        }

                    }else {
                        if(n - m == 0) {
                            printf("%d.\n", m);

                        }else if(n - m == 2) {
                            printf("%d e ", m);

                        }else {
                            printf("%d, ", m);

                        }

                    }

                }

            }else {
                if(m % 2 != 0) {

                    /*Esse desvio serve para determinar se o �ltimo valor do intervalo vai ser
                     *par ou �mpar*/
                    if(n % 2 != 0) {

                        /*Esse desvio ir� diferenciar os primeiros valores do intervalo dos �ltimos*/
                        if(n - m == 0) {
                            printf("%d.\n", m);

                        }else if(n - m == 2) {
                            printf("%d e ", m);

                        }else {
                            printf("%d, ", m);

                        }

                    }else {
                        if(n - m == 1) {
                            printf("%d.\n", m);

                        }else if(n - m == 3) {
                            printf("%d e ", m);

                        }else {
                            printf("%d, ", m);

                        }

                    }

                }

            }

            m++; /*atrav�s do sufixo ++, ir� ser incrementado + 1 a cada vez que for lido
                  * at� sair do la�o while*/

        }

    }else if(m > n) {

        /*Esse la�o while ir� permitir que sejam impressos os valores de n a m*/
        while(n <= m) {

            /*Esse desvio condicional ir� fazer com que sejam imprimidos valores de n par quando
             *for verdadeiro e impar quando falso*/
            if(p % 2 == 0){

                if(n % 2 == 0) {

                    /*Esse desvio serve para determinar se o �ltimo valor do intervalo vai ser
                     *par ou �mpar*/
                    if(m % 2 != 0) {

                        /*Esse desvio ir� diferenciar os primeiros valores do intervalo dos �ltimos*/
                        if(m - n == 1) {
                            printf("%d.\n", n);

                        }else if(m - n == 3) {
                            printf("%d e ", n);

                        }else {
                            printf("%d, ", n);

                        }

                    }else {
                        if(m - n == 0) {
                            printf("%d.\n", n);

                        }else if(m - n == 2) {
                            printf("%d e ", n);

                        }else {
                            printf("%d, ", n);

                        }

                    }

                }

            }else {
                if(n % 2 != 0) {

                    /*Esse desvio serve para determinar se o �ltimo valor do intervalo vai ser
                     *par ou �mpar*/
                    if(m % 2 != 0) {

                        /*Esse desvio ir� diferenciar os primeiros valores do intervalo dos �ltimos*/
                        if(m - n == 0) {
                            printf("%d.\n", n);

                        }else if(m - n == 2) {
                            printf("%d e ", n);

                        }else {
                            printf("%d, ", n);

                        }
                    }else {
                        if(m - n == 1) {
                            printf("%d.\n", n);

                        }else if(m - n == 3) {
                            printf("%d e ", n);

                        }else {
                            printf("%d, ", n);

                        }
                    }

                }

            }

            n++; /*atrav�s do sufixo ++, ir� ser incrementado + 1 a cada vez que for lido
                  * at� sair do la�o while*/

        }

    }else if(m == n && m % 2 == 0) {

        /*Esse desvio ir� determinar se o intervalo de 1 n�mero vai existir ou n�o*/
        if(p % 2 == 0) {
            printf("%d.\n", m);

        }else {
            printf("Nada para exibir.\n");

        }

    }else if(m == n && m % 2 != 0) {

        /*Esse desvio ir� determinar se o intervalo de 1 n�mero vai existir ou n�o*/
        if(p % 2 != 0) {
            printf("%d.\n", m);

        }else {
            printf("Nada para exibir.\n");

        }

    }

    return 0;
}
