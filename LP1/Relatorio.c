/**
 ============================================================================
 Name        : Relatorio.c
 Author      : Néfi Coelho Leite - 20190030796
 Version     : 1.0
 Description : Relatorio de moveis.
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// estrutura de dados de um jogador.
typedef struct Movel{
    char descricao[50];
    float peso;
    char tipo;
}tMovel;

void RemoveBarraN(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
}

int main(void){
    tMovel relatorio[30];
    int n, i, maisS = 0, maisR = 0;
    char Real[5] = "Real", *str[50];
    float pesado = 0;

    scanf("%d", &n);
    getchar();

    for(i = 0; i < n; i++){
        fgets(relatorio[i].descricao, 50, stdin);
        RemoveBarraN(relatorio[i].descricao);
        getchar();
        scanf("%f%*c", &relatorio[i].peso);
        scanf("%c%*c", &relatorio[i].tipo);

        if(relatorio[i].peso > 10 && relatorio[i].tipo == 's'){
            maisS++;
        }
        if(strstr(relatorio[i].descricao, "Real") == &relatorio[i].descricao[strlen(relatorio[i].descricao)- 4]){
            maisR++;
        }

        if(relatorio[i].peso > pesado){
            pesado = relatorio[i].peso;
            str[50] = &relatorio[i].descricao;
        }
    }

    printf("Tipo 's' acima de 10Kg: %d\n", maisS);
    printf("Termina em  Real: %d\n", maisR);
    printf("Mais pesado: %s\n", str);

    return 0;
}
