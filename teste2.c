#include <stdio.h>
#include <locale.h>

int main(void){
    // Colocando variaveis
    int nota, quant, total;
    float media;


    // Habilitando acentos
    setlocale(LC_ALL,"Portuguese");

    printf("Faremos a média do aluno no curso de calculo!\n");

    total = 0;
    quant = 0;
    nota = 1;

    while ( nota!= 0){
        printf("Digite a nota, zero finaliza o programa:\n");
        scanf("%d", &nota);
        if ( nota != 0){
        quant= quant + 1;
        total= total + nota;
        }
    }

    media = total / quant;
    printf("Media do Aluno é:%.f", media);

    return 0;
}

