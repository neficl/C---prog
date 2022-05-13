#include <stdio.h>

int main() {
    int n, m;    /*Para guarda as variáveis que irão determinar o intervalo*/
    int p;       /*Para guarda o valor inteiro que determinará se os números mostrados
                  * no intervalo são por ou ímpar*/

    scanf("%d", &m);
    scanf("%d", &n);
    scanf("%d", &p);

    /*Esse desvio serve para determinar a partir de que valor o intervalo irá começa, ou se vão ser iguais
     *e o intervalo só tiver um valor*/
    if(n > m) {

        /*Esse laço while irá permitir que sejam impressos os valores de m a n*/
        while(m <= n) {
            /*Esse desvio condicional irá fazer com que sejam imprimidos valores de m par quando
             *for verdadeiro e impar quando falso*/
            if(p % 2 == 0){

                if(m % 2 == 0) {

                    /*Esse desvio serve para determinar se o último valor do intervalo vai ser
                     *par ou ímpar*/
                    if(n % 2 != 0) {

                        /*Esse desvio irá diferenciar os primeiros valores do intervalo dos últimos*/
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

                    /*Esse desvio serve para determinar se o último valor do intervalo vai ser
                     *par ou ímpar*/
                    if(n % 2 != 0) {

                        /*Esse desvio irá diferenciar os primeiros valores do intervalo dos últimos*/
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

            m++; /*através do sufixo ++, irá ser incrementado + 1 a cada vez que for lido
                  * até sair do laço while*/

        }

    }else if(m > n) {

        /*Esse laço while irá permitir que sejam impressos os valores de n a m*/
        while(n <= m) {

            /*Esse desvio condicional irá fazer com que sejam imprimidos valores de n par quando
             *for verdadeiro e impar quando falso*/
            if(p % 2 == 0){

                if(n % 2 == 0) {

                    /*Esse desvio serve para determinar se o último valor do intervalo vai ser
                     *par ou ímpar*/
                    if(m % 2 != 0) {

                        /*Esse desvio irá diferenciar os primeiros valores do intervalo dos últimos*/
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

                    /*Esse desvio serve para determinar se o último valor do intervalo vai ser
                     *par ou ímpar*/
                    if(m % 2 != 0) {

                        /*Esse desvio irá diferenciar os primeiros valores do intervalo dos últimos*/
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

            n++; /*através do sufixo ++, irá ser incrementado + 1 a cada vez que for lido
                  * até sair do laço while*/

        }

    }else if(m == n && m % 2 == 0) {

        /*Esse desvio irá determinar se o intervalo de 1 número vai existir ou não*/
        if(p % 2 == 0) {
            printf("%d.\n", m);

        }else {
            printf("Nada para exibir.\n");

        }

    }else if(m == n && m % 2 != 0) {

        /*Esse desvio irá determinar se o intervalo de 1 número vai existir ou não*/
        if(p % 2 != 0) {
            printf("%d.\n", m);

        }else {
            printf("Nada para exibir.\n");

        }

    }

    return 0;
}
