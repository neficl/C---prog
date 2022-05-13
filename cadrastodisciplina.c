#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_MATRICULA 10
#define MAX_NOME 40
#define MAX_TURMA 30
#define MAX_DISCPLINA 50

char Disciplina[MAX_DISCPLINA];
int qAlunos = 0;

typedef struct{
    int matricula;
    char nomeAluno[MAX_NOME];
    float nota1, nota2, nota3;
    float notaRecuperacao;
} tAlunos;

tAlunos alunos[MAX_TURMA];

void RemoveBarraN(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
}

void OrdenaNome(){
    int i, trocou;
    tAlunos aux;

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


float MediaAluno(float n1, float n2, float n3){
    return (n1 + n2 + n3) / 3;
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

void InicioPrograma(){
    puts("Bem-Vindo Professor(a)!\n");

    printf("Insira qual a disciplina ministrada: ");
    fgets(Disciplina, MAX_DISCPLINA, stdin);
    RemoveBarraN(Disciplina);

    printf("Insira quantos alunos estao matriculados na disciplina(maximo de %d alunos): ", MAX_TURMA);
    scanf("%d", &qAlunos);
}

void ExibeMenu(){
    printf("\n----------- Menu -----------\n"
           "1 - Cadastrar aluno\n"
           "2 - Cadastrar notas\n"
           "3 - Quadro Notas e Alunos\n"
           "4 - Ordena por Nome\n"
           "0 - Sair\n\n");
}

void LeituraMatricula(){
    int i;
    for(i = 0; i < qAlunos; i++){
        printf("Cadastro do Discente #%d\n", i+1);

        printf("\tMatricula: ");
        scanf("%d%*c", &alunos[i].matricula);

        printf("\tNome: ");
        fgets(alunos[i].nomeAluno, MAX_NOME, stdin);
        RemoveBarraN(alunos[i].nomeAluno);
    }
}

void IncluirNotas(){
    int j;
    for (j = 0; j < qAlunos; j++){
        printf("Inserindo as notas de \'%s\': \n", alunos[j].nomeAluno);
        printf("\tNota 1: ");
        scanf("%f", &alunos[j].nota1);
        printf("\tNota 2: ");
        scanf("%f", &alunos[j].nota2);
        printf("\tNota 3: ");
        scanf("%f", &alunos[j].nota3);
        if(MediaAluno(alunos[j].nota1, alunos[j].nota2, alunos[j].nota3) >= 4 && MediaAluno(alunos[j].nota1, alunos[j].nota2, alunos[j].nota3) < 7 ){
            printf("\tNota da Recuperacao: ");
            scanf("%f", &alunos[j].notaRecuperacao);
        }
    }
}


void ExibeAlunos(){
    int i;
    printf("Disciplina: %s\n", Disciplina);
    printf("-------------------------------------------------------------------------------------------------------------------------------\n");
    printf(" Matricula\tNome\t\tNota 1\t\tNota 2\t\tNota 3\t\tRec\t\tMedia\t\tSituacao\n");
    printf("-------------------------------------------------------------------------------------------------------------------------------\n");

    for(i = 0; i < qAlunos; i++){
        printf(" %d\t\t%s\t%.1f\t\t%.1f\t\t%.1f\t\t%.1f\t\t%.1f\t\t%s\n", alunos[i].matricula, alunos[i].nomeAluno,
                alunos[i].nota1, alunos[i].nota2, alunos[i].nota3, alunos[i].notaRecuperacao, MediaAluno(alunos[i].nota1, alunos[i].nota2, alunos[i].nota3), Situacao(alunos[i].nota1, alunos[i].nota2, alunos[i].nota3, alunos[i].notaRecuperacao));
    }
}


int main(){
    int opcao;
    InicioPrograma();

    while (1){
        ExibeMenu();
        printf("Digite qual operacao deseja fazer: ");
        scanf("%d", &opcao);
        puts(" ");

        if(opcao == 0){
            break;
        }

        switch (opcao){
        case 1:
            LeituraMatricula();
            break;

        case 2:
            IncluirNotas();
            break;

        case 3:
            ExibeAlunos();
            break;

        case 4:
            OrdenaNome();
            break;

        default:
        puts("Operacao Invalida!");
            break;
        }
    }


    puts("Fim!");
    return 0;
}
