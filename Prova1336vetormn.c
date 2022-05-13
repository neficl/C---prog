/*
 ============================================================================
 Name        : 1336.c
 Author      : N�fi Coelho Leite - 20190030796
 Version     : 1.0
 Description : 1336 - Minimo e Maximo emm Vetor
 ============================================================================
 */

#include <stdio.h>

//Estamos tornando esse programa legivel e de facil manutenibilidade.
int MenorValor(int ar[0], int tamanho){ //Criamos uma funcao para o menor valor, utilizando par�metros (elementos do array + quantidade) que s�o modificados apenas na fun��o principal/main.

        int i, menorv = ar[0]; //Como n�o sabemos o menor valor inserido colocamos como o primeiro elemento do array.

        for(i = 0; i < tamanho; i++){ //Criamos um la�o for para verificar todo o array e com isso armazenar o menor valor na variavel menorn.
            if(menorv > ar[i]){
                menorv = ar[i];
            }
        }
    return menorv; // Retornamos o menor valor.
}
int MaiorValor(int ar[0], int tamanho){ //Criamos uma funcao para o maior valor, utilizando par�metros (elementos do array + quantidade) que s�o modificados apenas na fun��o principal/main.

        int i, maiorv = ar[0]; //Como n�o sabemos o maior valor inserido colocamos como o primeiro elemento do array.

        for(i = 0; i < tamanho; i++){ //Criamos um la�o for para verificar todo o array e com isso armazenar o maior valor na variavel maiorv.
            if(maiorv < ar[i]){
                maiorv = ar[i];
            }
        }
    return maiorv; // Retornamos o maior valor.
}
int main(void){
    int ar[100]; //Utilizamos o array com maior capacidade de acordo com o que se pede e depois � modificado conforme o tamanho n;
    int n, i, min, max; //Definicao de Variaveis.

    scanf("%d", &n); //Recebemos o real tamanho do array.
    for(i = 0; i < n; i++){
        scanf("%d", &ar[i]); //Recebemos seus valores.
    }

    min = MenorValor(ar,n); //Chamamos a funcao de menor valor do array e retornamos igualando para a variavel min.
    max = MaiorValor(ar,n); //Chamamos a funcao de maior valor do array e retornamos igualando para a variavel max.

    printf("%d %d\n", min, max);

    return 0;
}

