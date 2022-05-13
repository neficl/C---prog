#include <stdio.h>

float MediaArray(int ar[], int t){
    int soma = 0, i;

    for(i = 0; i < t; i++){
        soma += ar[i];
    }

    return (float) soma / t;
}

int EmArray(int ar[], int t, int procurado){
    int i;

    for(i = 0; i < t; i++){
        if (ar[i] == procurado)
            return 1;
    }

    return 0;
}

int MaximoValorArray(int ar[], int t){
    int maior = ar[0], i;

    for(i = 1; i < t; i++){
        if (ar[i] > maior)
            maior = ar[i];
    }

    return maior;
}

int EhArrayOrdenado(int ar[], int t){
    int i;

    for(i = 0; i < t - 1; i++){
        if (ar[i] > ar[i+1])
            return 0;
    }

    return 1;
}

int main(void){
    int valor[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i, soma = 0, chave;
    float media;

    valor[0] = 10;
    valor[1] = 20;

    for(i = 0; i < 10; i++){
        //valor[i] = (i + 1) * 10;
        printf("Digite o valor[%d]: ", i);
        scanf("%d", &valor[i]);
    }

    for(i = 0; i < 10; i++){
        printf("valor[%d] = %d\n", i, valor[i]);
    }

    puts("\n");
    for(i = 9; i >= 0; i--){
        printf("valor[%d] = %d\n", i, valor[i]);
    }

    printf("\n\nvalor[4] = %d\n\n\n", valor[4]);

    for(i = 0; i < 10; i++){
        if (i % 2 == 0)
            continue;
        printf("valor[%d] = %d\n", i, valor[i]);
    }

    puts("\n");
    soma = 0;
    for(i = 0; i < 10; i++){
        soma = soma + valor[i];
    }
    printf("soma dos elementos: %d\n\n\n", soma);

    media = MediaArray(valor, 10);
    printf("media dos elementos: %.2f\n\n\n", media);

    printf("Digite um valor para procurar: ");
    scanf("%d", &chave);
    if (EmArray(valor, 10, chave)){
        printf("%d esta no array valor.\n", chave);
    }else{
        printf("%d nao esta no array valor.\n", chave);
    }
    //printf("%d %s esta no array valor.\n", chave, EmArray(valor, 10, chave) ? "" : "nao");

    printf("\n\nMaior valor: %d\n\n\n", MaximoValorArray(valor, 10));
    printf("Os valores %s estao em ordem crescente.\n", EhArrayOrdenado(valor, 10) ? "" : "nao");

    //ordenacao
    int trocou, aux;

    while(1){
        trocou = 0;
        for(i = 0; i < 10 - 1; i++){
            if (valor[i] > valor[i+1]){
                aux = valor[i];
                valor[i] = valor[i+1];
                valor[i+1] = aux;
                trocou = 1;
            }
        }
        if (!trocou){
            break;
        }
    }
    printf("\n\nArray ordenado: ");
    for(i = 0; i < 10; i++){
        printf("%d ", valor[i]);
    }
    puts("");

    return 0;
}
