#include <stdio.h>

int main(void){ // N�fi

    int M, N, P, aux, i, contador; // M - primeiro numero, N - segundo numero, P - numero inteiro que determinar� se os valores dentro das variaveis M e N s�o impares ou pares, aux - auxiliar para descobrirmos o maior numero, i - utilizado para a contagem do nosso la�o for assim como apresenta��o dos resultados.

    scanf("%d\n%d\n%d", &M, &N, &P); //Recebemos os valores e guardamos em nossa memoria.

    if(M > N){ //trocar os valores
        aux = M;
        M = N;
        N = aux;
    }
        if(M == N){ // Ao pa�o pelas duas condi��es ifs e n�o forem verdadeiras, nossa condi��o else ser� executada!
            printf("Nada para exibir.\n");
        }

            for(i = M; i <= N; i++){
                if(P % 2 == 0){
                   if(i % 2 == 0 && N % 2 == 0){ // Descobriremos se o valor da senten�a � par, se sim vamos apresentar os valores que se encaixam dentro da variavel N(Maior) e M(menor).
                        if(N-M == 0){
                            printf("%d.\n", i);
                        }else if(N - M == 2){
                            printf("%d e ", i);
                        }else{
                             printf("%d, ", i);
                        }

                    } else {
                         if(N-M == 0){
                            printf("%d.\n", i);
                        }else if(N - M == 2){
                            printf("%d e ", i);
                        }else{
                             printf("%d, ", i);
                        }
                    }
                 }if(P % 2 != 0){
                   if(i % 2 != 0){
                     if(i % 2 != 0){ // Descobriremos o valor da senten�a se � impar, se sim, apresentaremos os valores.
                       if(N-M == 1){
                            printf("%d.\n", i);
                        }else if(N - M == 3){
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
