/**
 ============================================================================
 Name        : Entrada e Saida de Arquivos.c
 Author      : Néfi Coelho Leite - 20190030796
 Version     : 1.0
 Description : Arquivos.
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

typedef struct{
    int cpf;
    char nome[50];
    char sobrenome[50];
    char endereco[100];
    char telefone[50];
}tPessoa;

int main(){

    int n, i;
    scanf("%d", &n);

    tPessoa pessoas[n];

    for(i = 0; i < n; i++){
        scanf("%d", &pessoas[i].cpf);
        getchar();
        fgets(pessoas[i].nome, 50, stdin);
        fgets(pessoas[i].sobrenome, 50, stdin);
        fgets(pessoas[i].endereco, 100, stdin);
        fgets(pessoas[i].telefone, 50, stdin);
        pessoas[i].nome[strlen(pessoas[i].nome)-1] = '\0';
        pessoas[i].sobrenome[strlen(pessoas[i].sobrenome)-1] = '\0';
        pessoas[i].endereco[strlen(pessoas[i].endereco)-1] = '\0';
        pessoas[i].telefone[strlen(pessoas[i].telefone)-1] = '\0';
    }

    FILE * fp = fopen("arquivod.csv", "w");
    if(fp <= 0){
        puts("Erro abrindo arquivo");
        return 1;
    }

    fprintf(fp, "CPF,nome,snome,endereço,telefone\n");
    for(i = 0; i < n; i++){
        fprintf(fp, "%i,%s,%s,%s,%s\n", pessoas[i].cpf, pessoas[i].nome, pessoas[i].sobrenome, pessoas[i].endereco, pessoas[i].telefone);
    }
    fclose(fp);


    fp = fopen("arquivod.csv", "r");
    if(fp <= 0){
        puts("Erro abrindo arquivo");
        return 1;
    }
    char linha[300];
    for(i = 0; i <= n; i++){
        fgets(linha, 300, fp);
        printf("%s", linha);
    }
    fclose(fp);

    return 0;
}
