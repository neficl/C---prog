#include <stdio.h>

int main(void){// Néfi

    int M, N, P, aux, i; // M - primeiro numero, N - segundo numero, P - numero inteiro que determinará se os valores dentro das variaveis M e N são impares ou pares, aux - auxiliar para descobrirmos o maior numero, i - utilizado para a contagem do nosso la�o for assim como apresenta��o dos resultados.

    scanf("%d\n%d\n%d", &M, &N, &P); //Recebemos os valores e guardamos em nossa memoria.

    if(M > N){ //trocar os valores para descobrirmos o maior e o menor deles.
        aux = M;
        M = N;
        N = aux;
    }
        if(M == N){ // Aqui nós analisamos se M e N são iguais - Verificamos com numeros pares e impares.
            if(P % 2  == 0 && M % 2 == 0){
                printf("%d./n", M);
            }else if(P % 2 == 0 && M % 2 != 0){
                printf("Nada para exibir.\n");
            }else if(P % 2 != 0 && M % 2 != 0){
                printf("%d.\n", M);
            }else if(P % 2 != 0 && M % 2 == 0){
                printf("Nada para exibir.\n");
            }
        }

            for(i = M; i <= N; i= i + 1){ // Nesse laço de repetição for, analisamos os valores dentro do maior e menor numero, impar ou par.
                if(P % 2 == 0 && M != N){
                   if(i % 2 == 0){ // Descobriremos se o valor da sentença é par, se sim vamos apresentar os valores que se encaixam dentro da variavel N(Maior) e M(menor).
                    if(N % 2 != 0){
                        if(N - i == 1){ // A partir dessas condições analisamos a colocação das sentenças.
                            printf("%d.\n", i);
                        }else if(N - i == 3){
                            printf("%d e ", i);
                        }else{
                            printf("%d, ", i);
                        }

                    }else {
                        if(N - i == 0){
                            printf("%d.\n", i);
                        }else if(N - i == 2){
                            printf("%d e ", i);
                        }else{
                            printf("%d, ", i);
                        }

                     }

                    }
                 }else{
                    if(i % 2 != 0 && M != N){ // Analisamos agora a condinção if impar.
                        if(N % 2 != 0){
                            if(N - i == 0){
                                printf("%d.\n", i);
                            }else if(N - i == 2){
                                printf("%d e ", i);
                            }else{
                                printf("%d, ", i);
                            }
                        }else{
                            if(N - i == 1){
                                printf("%d.\n", i);
                            }else if(N - i == 3){
                                printf("%d e ", i);
                            }else{
                                printf("%d, ", i);

                            }
                        }
                    }
                }


            }


    return 0;
}
