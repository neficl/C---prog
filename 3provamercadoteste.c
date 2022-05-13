/*
 ============================================================================
 Name        : QuestaoArquivoProva.c
 Author      : Néfi Coelho Leite - 20190030796
 Version     : 1.0
 Description : Compras no supermecado
 ============================================================================
 */

#include <stdio.h> //Declaramos as funções que iremos utilizar para digitação, leitura e manipulação das strings.
#include <string.h>

#define TAM 20 //Definimos o valor do tamanho do array e string, sendo uma variavel constante.
#define TOTAL_PRODUTOS 10 //Numero máximo de produtos do arquivo da lista de produtos.

typedef struct{ //Criamos essa estrutura como meio de acesso para o arquivo onde encontra as informações dos produtos.
    char produto[TAM]; //Caracteres definidos para nome do produto, assim como seu codigo e o seu preço ou valor.
    int codigo;
    float valorProduto;
}tMercado;

tMercado compra[TAM]; //Facilitando a manipulação da estrutura, definimos como compra

void ProdutosDiponiveis(){ //Nossa função tem como finalidade abrir o arquivo e fechar de maneira correta.
    FILE *fp;
    int i; //Variavel responsável por pecorrer nosso laço for.

    fp = fopen("listaDeProdutos.txt", "r"); //Abrirmos o arquivo apenas para leitura do programa.

    if(fp == NULL){ // printf("Erro ao abrir o arquivo de dados.\n");
        return 0;
    }

    for(i = 0; i < TOTAL_PRODUTOS; i++){ //Iremos pecorrer todos os produtos para o nosso programa, ou seja, nome do produto, com o seu codigo e preço.
        fscanf(fp, "%[^\n]", compra[i].produto);
        fscanf(fp, "%d %f%*c", &compra[i].codigo, &compra[i].valorProduto);
    }

    fclose(fp);
    //printf("Dados carregados com sucesso.\n");
}

void CompraFeita(int vezes, int copiaCodigo[11], char copiaNome[20], double copiaVTotal[5], float copiaVProduto[6]){ //Com a compra finalizada iremos exibir a quantidade dos produtos, assim como seus preços unitarios e o valor total gasto.
    int i, quantidade = 0; //Definição de variaveis para serem utilizadas nessa função, responsaveis por pecorrer o laço for e quantidades e valores.
    double totalCompra = 0;

    puts("RESUMO DA COMPRA");
    puts("-----");

    for(i = 0; i < TOTAL_PRODUTOS; i++){
        if(copiaVTotal[i] != 0){ //Lembrando que utiliamos a passagem de parametro para o nosso array que foi executada no comando principal main.
            quantidade = copiaVTotal[i] / copiaVProduto[i]; //Calculo responvel por definir a quantidade de cada produto lido.
            if(quantidade != 0){
            printf("%dx %s: R$ %.2lf\n", quantidade, copiaNome[i], copiaVTotal[i]); //Impressao dos resultados.
            }
        }
    }
    puts("-----");

    for(i = 0; i < vezes; i++){
        totalCompra += copiaVTotal[i];
    }

    printf("TOTAL: R$ %.2lf\n", totalCompra);
}

int main(void){
    int i, codigoProduto, quantidade; //Definicao de variaveis para a execucao correta dos lacos e programa.
    double carrinho[TAM];

    char copiaNome[20];
    int copiaCodigo[11], vezes = 0;
    float copiaVProduto[6];
    double copiaVTtotal[5];

    ProdutosDiponiveis();//Chamamos a função para conhecermos os produtos encontradas no arquivo em nosso computador.

    while(1){ //Laço array com o objetivo do cliente/usuario realizarem a compra no mercado.
        scanf("%d %d", &codigoProduto, &quantidade); //Pedimos pro usuario digitar o codigo do produto e a quantidade necessaria.

        if(quantidade == 0 && codigoProduto == 0){ //Caso os valores da quantidade e codigo sejam igual a zero encerramos nosso laço de compras.
            break;
        }
        for(i = 0; i < TOTAL_PRODUTOS; i++){
            if(codigoProduto == compra[i].codigo){ //Entramos na condição if para identificarmos qual foi o produto e o valor deste multiplicado pelas quantidades desejadas.
                carrinho[i] += compra[i].valorProduto * quantidade;
                copiaCodigo[i] = compra[i].codigo;
                copiaNome[i] = compra[i].produto;
                copiaVTtotal[i] = carrinho[i];
                copiaVProduto[i] = compra[i].valorProduto;
                vezes++;

            }
        }
    }

    CompraFeita(vezes, copiaCodigo, copiaNome, copiaVTtotal, copiaVProduto); //Chamada da função que retorna os gastos e informações das compras, passamos por parametro as informações de produto e preço.

    return 0; //Encerramento do nosso programa, ja que finalizamos a compra!
}
