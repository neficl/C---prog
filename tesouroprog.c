/**
    Laboratorio de Introducao a Programacao para Engenharia da Computacao.
    Atividade do dia 22 de junho de 2021.

    Descricao:

    Complete esse codigo fonte para criar um programa dirigido por menus que mantem um
    cadastro de um tesouro e sua localizacao.

    O tesouro sera representado por:
      - Uma descricao (dinheiros, chocolate, feriado, ponto extra)
      - Um valor em reais
      - Uma coordenada X
      - Uma coordenada Y

    As funcionalidades do programa sao:
      - Cadastro do tesouro
      - Impressao das informacoes do tesouro cadastrado
      - Informar a distancia do tesouro a partir de um determinado ponto
        inserido pelo usuario

*/

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define MAX_DESCRICAO 51

typedef struct {
    char descricao[MAX_DESCRICAO];
    float valor;
    int x;
    int y;
    }tRegistro;

void ApresentaMensagem() {
    printf("Ola, esse programa vai te ajudar na busca ao tesouro...\n");
}

void ApresentaMenu() {
    printf("\n\n*** Opcoes *** \n"
                "\n1 - Cadastra"
                "\n2 - Imprime"
                "\n3 - Distancia a partir de um ponto"
                "\n5 - Sair\n");
}

tRegistro * CadastroRegistro(tRegistro *reg) {
    //ler do usuario e preencher, use prompts e scanf e preencha a estrutura no parametro
    printf("\nQual eh o tesouro? (Max = %d letras): ", MAX_DESCRICAO);
    scanf("%s", reg->descricao);
    printf("\nQual o valor do tesouro?");
    scanf("%f", &reg->valor);
    printf("\nQual a coordenada x do tesouro?");
    scanf("%d", &reg->x);
    printf("\nQual a coordenada y do tesouro?");
    scanf("%d", &reg->y);

    return reg;
}

void ImprimeRegistro(const tRegistro *reg) {
    //mostrar as informacoes do registro do parametro de forma organizadas
    printf("\n **O tesouro: %s **\n **Seu valor: %.1f **\n **Coordenada X: %d **\n **Coordenada Y: %d **\n", reg->descricao, reg->valor, reg->x, reg->y);
}

float Distancia(tRegistro reg, int x, int y){
	//funcao q retorna a distancia da coordenada dos parametros ate a coordenada do registro
    return ((x - reg.x) + (y - reg.y));
}

int main(void)
{
    tRegistro reg; //guarda o registro
    int opcao;
    float x, y;
    ApresentaMensagem();

    while(1){
        ApresentaMenu();
        scanf("%d", &opcao);

        if (opcao == 5){
            break;
        }


        switch(opcao){
            case 1:
                CadastroRegistro(&reg);
                break;
            case 2:
                ImprimeRegistro(&reg);
                break;
            case 3:
                printf("\nVamos tentar encontrar esse tesouro, Qual o valor estimado para a coordenada X?");
                scanf("%f", &x);

                printf("\nQual o valor estimado para a coordenada y?");
                scanf("%f", &y);

                printf("\nA Distancia pra pra alcancar eh: %.2f", Distancia(reg, x, y));
                break;
            default:
                puts("Opcao Invalida\n");
                break;
        }
    }

    puts("\nAdeus");
    return 0;
}


