/**
 ============================================================================
 Name        : Menu de Opções.c
 Author      : Néfi Coelho Leite - 20190030796
 Version     : 1.0
 Description : Menu 4 opções.
 ============================================================================
 */

#include <stdio.h>

void Menu(){
    puts("1 - Item 1");
    puts("2 - Item 2");
    puts("3 - Item 3");
    puts("4 - Sair");
}

int main(void){

    int n;

    while(1){
        Menu();
        scanf("%d", &n);
        switch(n){
            case 1:
                puts("Item 1");
                break;
            case 2:
                puts("Item 2");
                break;
            case 3:
                puts("Item 3");
                break;
            case 4:
                puts("Sair");
                return 0;
                break;
            default:
                printf("Opcao %d Invalida\n", n);
                break;

        }
    }
    return 0;
}
