/**
 ============================================================================
 Nome      : 2-Pitagoras
 Autor     : Nefi
 Versao    : 1.0
 Copyright : CC BY 4.0
 Descricao : O programa le duas notas e calcula a media com uma funcao.
 ============================================================================
 **/
#include <stdio.h>
#include <math.h>

float EhTrianguloRetangulo(float a, float b, float c){
    if(pow(a,2)+ pow(b,2) == pow(c,2)){
        return 1;
    }else{
        return 0;
    }
}

float FormaTrianguloRetangulo(float a, float b, float c){
    if ( a <= 0 && b > 0 && c > 0){
        return sqrt((c*c)-(b*b));
    }else if ( b <= 0 && a > 0 && c > 0){
        return sqrt((c*c)-(a*a));
    }else if ( c <= 0 && a > 0 && b > 0){
        return sqrt((a*a)+(b*b));
    }else{
        return -1;
    }
}


int main(void){
    float a, b, c; /* os valores a serem lidos do usuario */

    /* leitura dos valores */
    printf("Digite o valor de A do Teorema de Pitagoras: ");
    scanf("%f", &a);
    printf("Digite o valor de B do Teorema de Pitagoras: ");
    scanf("%f", &b);
    printf("Digite o valor de C do Teorema de Pitagoras: ");
    scanf("%f", &c);

    if(a > 0 && b > 0 && c > 0){
        if(EhTrianguloRetangulo(a,b,c)){
            puts("Eh um triangulo Retangulo");
        }else{
            puts("Nao forma um triangulo Retangulo");
        }
    }else if ( a <= 0 && b > 0 && c > 0){
        printf("O lado a tem que ser igual a: &.f\n", FormaTrianguloRetangulo(a,b,c));
    }else if ( b <= 0 && a > 0 && c > 0){
        printf("O lado b tem que ser igual a: &.f\n", FormaTrianguloRetangulo(a,b,c));
    }else if ( c <= 0 && a > 0 && b > 0){
        printf("O lado c tem que ser igual a: &.f\n", FormaTrianguloRetangulo(a,b,c));
    }else if(FormaTrianguloRetangulo(a,b,c)== -1){
        puts("Entrada Invalida, lados nao formam triangulo retangulo!");
    }

    return 0;
}
