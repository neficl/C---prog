#include <stdio.h>

int main(void){ // N�fi

    int M, N, P, aux, i; // M - primeiro numero, N - segundo numero, P - numero inteiro que determinar� se os valores dentro das variaveis M e N s�o impares ou pares, aux - auxiliar para descobrirmos o maior numero, i - utilizado para a contagem do nosso la�o for assim como apresenta��o dos resultados.

    scanf("%d\n%d\n%d", &M, &N, &P); //Recebemos os valores e guardamos em nossa memoria.

    if(M > N){ //trocar os valores
        aux = M;
        M = N;
        N = aux;
    }

        for(i = M; i < N; i++){
             if(i % 2 == 0 && P % 2 == 0){ // Descobriremos se o valor da senten�a � par, se sim vamos apresentar os valores que se encaixam dentro da variavel N(Maior) e M(menor).
                printf("%d ", i);
             }else if(i % 2 ==1 && P % 2 == 1){ // Descobriremos o valor da senten�a se � impar, se sim, apresentaremos os valores.
                printf("%d ", i);
             }else if(i % 2 == 0 && P % 2 == 0 && N){
                printf("%d \n", i); // Adicionamos essa sa�da para qie uma nova linha posso ser adicionado um novo caractere.
             }else if(i % 2 ==1 && P % 2 == 1 && N){
                printf("%d \n", i);
             }else if(M == N){ // Ao pa�o pelas duas condi��es ifs e n�o forem verdadeiras, nossa condi��o else ser� executada!
                printf("Nada para exibir.\n");
             }

        }

    return 0;
}

