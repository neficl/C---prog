/**
 ============================================================================
 Name        : Data Mais Antiga.c
 Author      : Néfi Coelho Leite - 20190030796
 Version     : 1.0
 Description : Estrutura datas.
 ============================================================================
 */

 #include <stdio.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}tData;

int ComparaDatas(tData d1, tData d2){
    if(d1.ano == d2.ano){
        if(d1.mes == d2.mes){
            if(d1.dia == d2.dia){
                return 0;
            }else if(d1.dia < d2.dia){
                return 1;
            }else
                return -1;
            }else if(d1.mes < d2.mes){
                return 1;
            }else
                return -1;
            }else if(d1.ano < d2.ano){
                return 1;
            }else
                return -1;
}

int main(void){
    tData d1, d2;
    int data;

    scanf("%d %d %d", &d1.dia, &d1.mes, &d1.ano);
    scanf("%d %d %d", &d2.dia, &d2.mes, &d2.ano);

    data = ComparaDatas(d1, d2);

    if(data == 0){
        puts("Pessoas são da mesma idade");
    }else if(data == 1){
        puts("Pessoa 1 é mais velha");
    }else{
        puts("Pessoa 2 é mais velha");
    }

    return 0;
}
