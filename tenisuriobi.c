#include <stdio.h>

int Resultado(int cont){
    int resultado = 0;

    if(cont == 5 || cont == 6){
        resultado = 1;
    }else if(cont == 3 || cont == 4){
        resultado = 2;
    }else if(cont == 1 || cont == 2){
        resultado = 3;
    }else{
        resultado = -1;
    }

    return resultado;
}

int main(void){

    int i, x, contV = 0;

    for(i = 0; i < 6; i++){
        scanf("%lc", &x);
	getchar();
        if(x == 'V'){
            contV++;
        }
    }

    printf("%d\n", Resultado(contV));

    return 0;
}
