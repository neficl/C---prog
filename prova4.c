#include <stdio.h>

int main(void){ // Néfi

    int M, N, P, aux, i; // M - primeiro numero, N - segundo numero, P - numero inteiro que determinará se os valores dentro das variaveis M e N são impares ou pares, aux - auxiliar para descobrirmos o maior numero, i - utilizado para a contagem do nosso laço for assim como apresentação dos resultados.

    scanf("%d\n%d\n%d", &M, &N, &P); //Recebemos os valores e guardamos em nossa memoria.

    if(M > N){ //trocar os valores
        aux = M;
        M = N;
        N = aux;
    }
        if(M == N){ // Ao paço pelas duas condições ifs e não forem verdadeiras, nossa condição else será executada!
                    printf("Nada para exibir.\n");
        }

        for(i = M; i < N; i++){
            if(i % 2 == 0 && P % 2 == 0){ // Descobriremos se o valor da sentença é par, se sim vamos apresentar os valores que se encaixam dentro da variavel N(Maior) e M(menor).
                printf("%d ", i);
                if(i == N || i == N-1){
                    printf("%d\n", i);
                }
             } else{
                if(i % 2 ==1 && P % 2 == 1){ // Descobriremos o valor da sentença se é impar, se sim, apresentaremos os valores.
                    printf("%d ", i);
                    if(i == N || i == N-1){
                    printf("%d\n", i);
                    }
                }
               }
        }


    return 0;
}

