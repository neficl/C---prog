/**
 ============================================================================
 Name        : Veiculos.c
 Author      : Néfi Coelho Leite - 20190030796
 Version     : 1.0
 Description : Veiculo mais antigo ou mais barato.
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define Max_Nome 15

typedef struct{
    char modelo[Max_Nome], marca[Max_Nome];
    int ano, preco;
}tCarro;

void RemoveBarraN(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
}

int main(void){
    int i;

    tCarro veiculo[2];
    for(i = 0; i < 2; i++){
        fgets(veiculo[i].modelo, Max_Nome, stdin);
        RemoveBarraN(veiculo[i].modelo);
        fgets(veiculo[i].marca, Max_Nome, stdin);
        RemoveBarraN(veiculo[i].marca);
        scanf("%d %d", &veiculo[i].ano, &veiculo[i].preco);
        getchar();
    }

    if(veiculo[0].ano > veiculo[1].ano){
        printf("%s %s\n", veiculo[1].marca, veiculo[1].modelo);
    }else if(veiculo[0].ano < veiculo[1].ano){
        printf("%s %s\n", veiculo[0].marca, veiculo[0].modelo);
    }else if(veiculo[0].ano == veiculo[1].ano){
        if(veiculo[0].preco > veiculo[1].preco){
           printf("%s %s\n", veiculo[1].marca, veiculo[1].modelo);
        }else{
            printf("%s %s\n", veiculo[0].marca, veiculo[0].modelo);
        }
    }

    return 0;
}
