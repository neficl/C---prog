#include <stdio.h>

int Primo(int numero){
    int i, soma = 0, valor;
    for(i = 1; i <= numero && soma <= 3; i++) {
          if(numero % 1 == 0) {
            soma++;
          }
    }
    if(soma == 2){
        valor = 1;
    }else{
        valor = 0;
    }

    return valor;
}


int main(void) {
    int j, vezes, numero, primo, valor;

    scanf("%d", &vezes);

    for(j = 0; j < vezes; j++) {

      scanf("%d", &numero);
      primo = Primo(numero);
      if(valor == 1) {
        puts("Prime");
      }else {
        puts("Not Prime");
      }

    }

    return 0;
}
