/*
 ============================================================================
 Name        : 1336.c
 Author      : Néfi Coelho Leite - 20190030796
 Version     : 1.0
 Description : 1336 - Minimo e Maximo emm Vetor
 ============================================================================
 */

#include <stdio.h>

//Estamos tornando esse programa legivel e de facil manutenibilidade.
void MenorMaiorValor(int ar[], int tamanho, int *menorv, int *maiorv){ //Criamos uma funcao para o menor e maior valor, utilizando parâmetros (elementos do array + quantidade, mas dois ponteiros que passaram seus enderecos, consequentemente seus valores) que são modificados apenas na função principal/main.

        int i; //Definimos o ir para o nosso for que ira rodar o array.
        for(i = 0; i < tamanho; i++){//Criamos um laço for para verificar todo o array e com isso armazenar o menor valor na variavel menorn.
            *menorv = ar[0];//Como nao sabemos quem eh o menor elemento, definimos como o primeiro.
            if(*menorv > ar[i]){
                *menorv = ar[i];
            }
        }

        for(i = 0; i < tamanho; i++){ //Criamos um laço for para verificar todo o array e com isso armazenar o maior valor na variavel maiorv.
                *maiorv = ar[0];//Como nao sabemos quem eh o maior elemento, definimos como o primeiro.
            if(*maiorv < ar[i]){
                *maiorv = ar[i];
            }
        }
}

int main(void){
    int ar[100]; //Utilizamos o array com maior capacidade de acordo com o que se pede e depois é modificado conforme o tamanho n;
    int n, i, min, max; //Definicao de Variaveis.

    scanf("%d", &n); //Recebemos o real tamanho do array.
    for(i = 0; i < n; i++){
        scanf("%d", &ar[i]); //Recebemos seus valores.
    }

    MenorMaiorValor(ar,n,&min,&max); //Chamamos a funcao de menor e maior valor do array, junto com os enderecos das variaveis min e max que serao modificados conforme a funcao void.

    printf("%d %d\n", min, max);

    return 0;
}

