#include <stdio.h>
#include <string.h>

#define TAM 11

typedef struct{
    int quantidade;
    float valor, totalProduto, totalCompra;
    int codigo[11];
    char nome[21];
}tMercado;

tMercado produto[TAM];

void RemoveBarraN(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
}


void BoasVindas(){
    puts("----------Seja bem-vindo ao Mercado Cristal----------");
    puts("\nSou o Marck e vou te ajudar com as suas compras!");
}

void ExibeMenu(){
    printf("\n----------- Menu -----------\n"
           "1 - Veja os Produtos Disponiveis\n"
           "2 - Faca a compra\n"
           "3 - Resumo da compra\n"
           "0 - Sair do mercado\n\n");
}

void ProdutosDiponiveis(){
    FILE *fp;

    fp = fopen("listaDeProdutos.txt", "r");
    if (fp == NULL){
        printf("Erro ao abrir o arquivo de dados.\n");
        return;
    }

    if (fclose(fp) == 0){
        printf("Dados carregados com sucesso.\n");
    }
}

void FazerCompra(){
    FILE *fp;

    fp = fopen("comprar.txt", "w");
    if (fp == NULL){
        printf("Erro ao criar o arquivo de dados.\n");
        return;
    }

    for(i = 0; i < quantidadeDesejada; i++){
        fprintf("")
    }

    if (fclose(fp) == 0){
        printf("Dados salvos com sucesso.\n");
    }
}

void OrdenaCompra(){
    int i, trocou;


    trocou = 1;
    while(trocou){
        trocou = 0;
        for(i = 0; i < qAlunos-1; i++){
            if ( strcmp(alunos[i].nomeAluno, alunos[i+1].nomeAluno) > 0 ){
                aux = alunos[i];
                alunos[i] = alunos[i+1];
                alunos[i+1] = aux;
                trocou = 1;
            }
        }
    }

}

void SeuCarrinho(...., tMercado *produto){
    int i;
    printf("RESUMO DA COMPRA\n"
           "-----\n");

    for(i = 0; i < compraconcluida; i++){
        if(produto[i].totalCompra != 0){
            printf("%dx %s: R$ %.2f\n", produto[i].quantidade, produto[i].nome, produto[i].totalProduto);
        }
    }

    printf("-----\n"
           "TOTAL: R$ %.2f\n", produto[i].totalCompra);
}

int main(){
    int opcao;
    BoasVindas();

    while (1){
        ExibeMenu();
        printf("Digite qual operacao deseja fazer: ");
        scanf("%d", &opcao);
        puts(" ");

        if(opcao == 0){
            SeuCarrinho(...);
            break;
        }

        switch (opcao){
        case 1:
            ProdutosDiponiveis();
            break;

        case 2:
            FazerCompra();
            break;

        case 3:
            ExibeCompra();
            break;

        default:
        puts("Operacao Invalida!");
            break;
        }
    }

    return 0;
}
