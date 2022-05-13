#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_MATRICULA 15
#define MAX_NOME 40
#define MAX_DISCENTE 30
#define MAX_DISCPLINA 50

char disciplina[MAX_DISCPLINA];
int qAlunos = 0;

typedef struct{
    int matricula;
    char aluno[MAX_NOME];
    float nota1, nota2, nota3;
    float recuperacao;
} tTurma;

tTurma alunos[MAX_DISCENTE];

void ExibeMenu(){

    printf("\n----------- Menu -----------\n"
           "1 - Cadastrar aluno\n"
           "2 - Cadastrar notas\n"
           "3 - Visualizar Quadro referente aos cadastros\n"
           "4 - Ordena por Nome\n"
           "5 - Sair\n\n");
}


void adicionarMatricula(){
    int i;

    for(i = 0; i < qAlunos; i++){
        printf("Cadastro do Discente #%d\n", i+1);

        printf("\tMatricula: ");
        scanf("%d%*c", &alunos[i].matricula);

        printf("\tNome: ");
        fgets(alunos[i].aluno, MAX_NOME, stdin);
        RemoveBarraN(alunos[i].aluno);
    }
}

void RemoveBarraN(char *str){

    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
}

float MediaAluno(float nota1, float nota2, float nota3){

    return (nota1 + nota2 + nota3) / 3;
}

void adicionarNota(){
    int j;
    for (j = 0; j < qAlunos; j++){
        printf("Inserindo as notas de \'%s\': \n", alunos[j].aluno);
        printf("\tNota 1: ");
        scanf("%f", &alunos[j].nota1);
        printf("\tNota 2: ");
        scanf("%f", &alunos[j].nota2);
        printf("\tNota 3: ");
        scanf("%f", &alunos[j].nota3);
        if(MediaAluno(alunos[j].nota1, alunos[j].nota2, alunos[j].nota3) >= 4 && MediaAluno(alunos[j].nota1, alunos[j].nota2, alunos[j].nota3) < 7 ){
            puts("Eh necessario a nota da recuperacao, pois o aluno nao passou!");
            printf("\tNota da Recuperacao: ");
            scanf("%f", &alunos[j].recuperacao);
        }
    }
}

void ordenaNome(){

    int i, trocou;
    tTurma aux;

    trocou = 1;
    while(trocou){
        trocou = 0;
        for(i = 0; i < qAlunos-1; i++){
            if ( strcmp(alunos[i].aluno, alunos[i+1].aluno) > 0 ){
                aux = alunos[i];
                alunos[i] = alunos[i+1];
                alunos[i+1] = aux;
                trocou = 1;
            }
        }
    }

}

char *Situacao(float n1, float n2, float n3, float n4){

    if(MediaAluno(n1, n2, n3) >= 7){
        return "APROVADO";
    }
    if(((MediaAluno(n1, n2, n3) * 6 + n4 * 4)/10) >= 5){
        return "APROVADO";
    }
    if(MediaAluno(n1, n2, n3) < 4){
        return "REPROVADO";
    }
    if(((MediaAluno(n1, n2, n3) * 6 + n4 * 4)/10) < 5){
        return "REPROVADO";
    }
}

void quadroDeAlunos(){
    int i;
    printf("Disciplina: %s\n", disciplina);
    printf("-------------------------------------------------------------------------------------------------------------------------------\n");
    printf(" Matricula\t\tNome\t\tNota 1\t\tNota 2\t\tNota 3\t\tRecuperacao\t\tMedia\t\tSituacao\n");
    printf("-------------------------------------------------------------------------------------------------------------------------------\n");

    for(i = 0; i < qAlunos; i++){
        printf(" %d\t\t%s\t\t%.1f\t\t%.1f\t\t%.1f\t\t%.1f\t\t%.1f\t\t%s\n", alunos[i].matricula, alunos[i].aluno,
                alunos[i].nota1, alunos[i].nota2, alunos[i].nota3, alunos[i].recuperacao, MediaAluno(alunos[i].nota1, alunos[i].nota2, alunos[i].nota3), Situacao(alunos[i].nota1, alunos[i].nota2, alunos[i].nota3, alunos[i].recuperacao));
    }
}

int main(){
    int opcao;

    puts("-----------Seja Bem-Vindo ao Portal de Ensino-----------\n\n");

    puts("Professor(a) aqui iremos gerar as notas e aprovacoes dos seus alunos!\n");

    printf("Qual eh a disciplina ministrada (Maximo de %d Letras): ", MAX_DISCPLINA-1);
    fgets(disciplina, MAX_DISCPLINA, stdin);
    RemoveBarraN(disciplina);

    printf("Quantos alunos estao matriculados?(Maximo de %d alunos): ", MAX_DISCENTE);
    scanf("%d", &qAlunos);

    while (1){
        ExibeMenu();
        printf("DIgita o numero da operacao: ");
        scanf("%d", &opcao);

        if(opcao == 5){
            break;
        }

        switch (opcao){
        case 1:
            adicionarMatricula();
            break;

        case 2:
            adicionarNota();
            break;

        case 3:
            quadroDeAlunos();
            break;

        case 4:
            ordenaNome();
            break;

        default:
        puts("Operacao Invalida!");
            break;
        }
    }

    return 0;
}
