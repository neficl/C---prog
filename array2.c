#include <stdio.h>
int main(){
    double notaAluno[10], media, soma;
    int i;
        for(i = 0; i < 10; i++){
            printf("Digite a nota do aluno %d: ", i+1);
            scanf("%d", &notaAluno[i]);
        }
        soma = 0;
        for(i = 0; i < 10; i++){
            soma = soma + notaAluno[i];
        }

        media = soma/10;

    return 0;
}

#include <stdio.h>
int EhPar(int n){
return n % 2 == 0;
}
int main(){
int valor[5];
int i, soma = 0, qPares = 0;
for(i = 0 ; i < 5; i++){
scanf("%d", &valor[i]);
}
for(i = 0; i < 5; i++){
soma = soma + valor[i];
if (EhPar(valor[i])){
qPares++;
}
}
printf("Media dos valores: %.1f\n", soma/5.0);
printf("Quantidade de numeros pares: %d\n", qPares);
return 0;
}
