/**
 ============================================================================
 Name        : Jogadores.c
 Author      : Néfi Coelho Leite - 20190030796
 Version     : 1.0
 Description : Melhor desempenho de chutes.
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define Max_Nome 30

typedef struct{
    char nome[Max_Nome];
    int idade, chutes, gols;
}tJogador;

void RemoveBarraN(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
}

int main(void){
    int i;
    double aproveitamentoA, aproveitamentoB;

    tJogador futebol[2];
    for(i = 0; i < 2; i++){
        fgets(futebol[i].nome, Max_Nome, stdin);
        RemoveBarraN(futebol[i].nome);
        scanf("%d %d %d", &futebol[i].idade, &futebol[i].chutes, &futebol[i].gols);
        getchar();
    }

    aproveitamentoA = (double)futebol[0].gols / (double)futebol[0].chutes;
    aproveitamentoB = (double)futebol[1].gols / (double)futebol[1].chutes;

    if(aproveitamentoA > aproveitamentoB){
        printf("%s (%d)\n", futebol[0].nome, futebol[0].idade);
    }else{
        printf("%s (%d)\n", futebol[1].nome, futebol[1].idade);
    }

    return 0;
}
