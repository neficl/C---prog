#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int copas[14] = {0}, espadas[14] = {0}, ouros[14] = {0}, paus[14] = {0};
    char str[100];
    int i, cont;
    size_t tamanho;


    fgets(str, 100, stdin);

    tamanho = strlen(str);

    for (i = 0; i < tamanho; i = i + 3 ){
        if (str[i+2] == 'C')
            copas[atoi(&str[i])]++;
        else if (str[i+2] == 'E')
            espadas[atoi(&str[i])]++;
        else if (str[i+2] == 'U')
            ouros[atoi(&str[i])]++;
        else if (str[i+2] == 'P')
            paus[atoi(&str[i])]++;
    }

    cont = 0;
    for (i = 0; i < 14; i++){
        if (copas[i] == 0){
            cont++;
        }else if (copas[i] > 1){
            cont = -1;
            break;
        }
    }
    if (cont == -1){
        puts("erro");
    }else {
        printf("%d\n", cont-1);
    }


    cont = 0;
    for (i = 0; i < 14; i++){
        if (espadas[i] == 0){
            cont++;
        }else if (espadas[i] > 1){
            cont = -1;
            break;
        }
    }
    if (cont == -1){
        puts("erro");
    }else {
        printf("%d\n", cont-1);
    }


    cont = 0;
    for (i = 0; i < 14; i++){
        if (ouros[i] == 0){
            cont++;
        }else if (ouros[i] > 1){
            cont = -1;
            break;
        }
    }
    if (cont == -1){
        puts("erro");
    }else {
        printf("%d\n", cont-1);
    }


    cont = 0;
    for (i = 0; i < 14; i++){
        if (paus[i] == 0){
            cont++;
        }else if (paus[i] > 1){
            cont = -1;
            break;
        }
    }
    if (cont == -1){
        puts("erro");
    }else {
        printf("%d\n", cont-1);
    }


    return 0;
}
