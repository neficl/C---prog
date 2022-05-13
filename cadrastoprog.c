#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_DISCENTE 31
#define MAX_NOME 41
#define MAX_MATRICULA 16

typedef struct {
    char nome[MAX_DISCENTE][MAX_NOME];
    float nota1[MAX_DISCENTE], nota2[MAX_DISCENTE], nota3[MAX_DISCENTE], recuperacao[MAX_DISCENTE];
    int matricula[MAX_DISCENTE][MAX_MATRICULA];
    }tDados;

void RemoveBarraN(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
}

void AdicionaDiscente(){
    if (qDiscentes >= MAX_DISCENTE){
        puts("Capacidade de armazenamento cheia.");
        return;
    }

    printf("Insira as informacoes do discente #%d: \n", qDiscentes + 1);
    printf("\tMatricula: ");
    scanf("%s%*c", matricula[qDiscentes]);
    printf("\tNome: ");
    fgets(nome[qDiscentes], MAX_NOME, stdin);
    RemoveBarraN(nome[qDiscentes]);
    qDiscentes++;
}


int main(void){
    char disciplina[51]={0};
    int alunos, opcao;

    while(1){
        puts("-----------------Seja Bem Vindo ao Portal De Ensino!-----------------")
        printf("Vamos cadastrar as notas dos seus alunos, qual a sua Disciplina professor?[Digite até 50 letras]: ");
        fgets(disciplina, 51, stdin);

        RemoveBarraN(disciplina[51]);

        printf("\nQuantos alunos professor?[Máximo 30 discentes]:")
        scanf("%d", &alunos);

        if (opcao == 9)
            break;

        switch(opcao){
            case 1:
                AdicionaDiscente();
                break;
            case 2:
                CadastraNotas();
                break;
            case 3:
                printf("Digite (0) para procurar por matricula ou (1) por nome: ");
                scanf("%d%*c", &tipoBusca);
                ConsultaDiscente(tipoBusca);
                break;
            case 4:
                Relatorio();
                break;
            case 5:
                AtualizaNota();
                break;
            case 6:
                OrdenaNome();
                break;
            default:
                puts("Opcao invalida.");
        }
    }

    return 0;
}
