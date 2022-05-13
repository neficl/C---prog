/*
 ============================================================================
 Name        : 1150.c
 Author      : Taylor Klaus Cantalice Nobrega - 20200004268
 Version     : 1.0
 Description : 1150 - � uma PA ou uma PG?
 ============================================================================
 */

#include <stdio.h>
int main(void){
    int termo_1; /*Para guardar os primeiros termos da progressao.*/
    int termo_N; /*Para guardar o ultimo termo da progresao e controlar a quantidade de testes.*/
    int razao_PA_1; /*Para armazenar o valor da razao da PA.*/
    int razao_PG_1; /*Para armazenar o valor da razao da PG.*/
    int numero_Termos; /*Para guardar os valores da quantidade de termos analisados.*/
    int valor_PA = 0; /*Para verificar se as raz�es da PA s�o constantes*/
    int valor_PG = 0; /*Para verificar se as raz�es da PG s�o constantes*/

    scanf("%d %d", &termo_1, &termo_N);
    numero_Termos = 2;
    razao_PA_1 = termo_N - termo_1;
    razao_PG_1 = termo_N/termo_1;

    /*
    * A condi��o do 'while' a seguir fara ele executar at� o �ltimo termo digitado
    * for um valor negativo.
    */
    while (termo_N >= 0){
        termo_1 = termo_N;
        scanf("%d", &termo_N);

        /*
        * Essa estrutura de controle (continue) ao ser executado, desvia o fluxo de execu��o do programa,
        * normalmente encerrando a execu��o apenas da itera��o atual (da repeti��o atual). Assim, o termo_N
        * ser� novamente analisado pela condi��o do 'while'.
        */
        if (termo_N < 0){
            continue;
        }

        numero_Termos++;
        if (termo_1 + razao_PA_1 != termo_N){ // Verifica se os termos fazem parte de uma PA.
            valor_PA++;
        }
        if (termo_1 * razao_PG_1 != termo_N){ // Verifica se os termos fazem parte de uma PG.
            valor_PG++;
        }
    }

    if ((valor_PA) && (valor_PG)){
        printf("Sequencia com %d termos.\n", numero_Termos);
    }
    if (!(valor_PA)){
        printf("PA com %d termos e razao %d.\n", numero_Termos, razao_PA_1);
    }
    if (!(valor_PG)){
        printf("PG com %d termos e razao %d.\n", numero_Termos, razao_PG_1);
    }

 return 0;
}
