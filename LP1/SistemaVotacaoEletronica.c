/**
 ============================================================================
 Name        : Sistema de Votação Urna Eletrônica.c
 Author      : Néfi Coelho Leite - 20190030796
 Version     : 1.0
 Description : Fazer um sistema de votação
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define Max_Nome 50

typedef struct{
    char nome[Max_Nome];
    int numero;
    int qVotos;
}tVotacao;

int Ganhador(tVotacao m[], int tamanho){
    int i, vencedor = 0, maior = 0;

    for(i = 0; i < tamanho; i++){
        if(m[i].qVotos > maior){
            vencedor = i;
            maior = m[i].qVotos;
        }
    }
    return vencedor;
}

void RemoveBarraN(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
}

int main(){
    int qCandidatos, i;
    int vPart;
    float tNulo = 0, tVotos = 0;

    scanf("%d", &qCandidatos);

    tVotacao vet[qCandidatos];
    for(i = 0; i < qCandidatos; i++){
        scanf("%d", &vet[i].numero);
        getchar();
        fgets(vet[i].nome, Max_Nome, stdin);
        RemoveBarraN(vet[i].nome);
        vet[i].qVotos = 0;
    }

    do{
        scanf("%d", &vPart);
        int n = 0;
        if(vPart > 0){
            for(i = 0; i < qCandidatos; i++){
                if(vPart == vet[i].numero){
                    vet[i].qVotos++;
                    n = 1;
                    break;
                }
            }
            if (n == 0){
                tNulo++;
            }
            tVotos++;
        }
    }while(vPart > 0);

    int Vencedor = Ganhador(vet, qCandidatos);

    for(i = 0; i < qCandidatos; i++){
        if(i == Vencedor){
            printf("%.2f - %d - %s VENCEDOR\n", vet[i].qVotos * 100.0 /tVotos, vet[i].numero, vet[i].nome);
        }else{
            printf("%.2f - %d - %s\n", vet[i].qVotos * 100.0 /tVotos, vet[i].numero, vet[i].nome);
        }
    }

    printf("%.2f - Nulos\n", tNulo * 100.0 /tVotos);

    return 0;
}
