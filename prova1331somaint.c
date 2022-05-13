/*
 ============================================================================
 Name        : 1331.c
 Author      : N�fi Coelho Leite - 20190030796
 Version     : 1.0
 Description : 1331 - Soma de Intervalos
 ============================================================================
 */

#include <stdio.h>

//Estamos tornando esse programa legivel e de facil manutenibilidade.
int SomaNumeros(int a, int b){ //Criamos uma funcao para somar os valores do intervalo, utilizando par�metros (numero a e numero b) que s�o modificados apenas na fun��o principal/main.
        int i, soma = 0; // Acrescentamos duas variaveis, uma que ser� a soma dos intervalos e outra para pecorrer o la�o for.

        if(a > b){ // Criamos uma condi��o caso o maior valor seja declarado como a, caso contrario (else) o maior valor sera o de b, ou seja, ficara de maneira crescente e sem afetar nossa opera�ao.
            for(i = b;i <= a;i++){
                soma+=i; // Como iniciamos soma igual a zero, ela vai adicionar conforme os valores de i entre o maior e menor valor (incrementamos).
            }
        }else{
            for(i = a;i <= b;i++){
                soma+=i;
            }
        }
    return soma; //Retornamos com a soma dos intervalos.
}

int main(void){
    int a, b, soma; //Definicao de variaveis.

    scanf("%d %d", &a, &b); //Recebemos os valores das duas variavies que serao somadas seus intervalos.

    soma = SomaNumeros(a,b); //Chamamos a funcao de Soma de Numeros e retornamos igualando para a variavel soma.

    printf("%d\n", soma); //Imprimimos a Soma dos Intervalos.

    return 0;
}
