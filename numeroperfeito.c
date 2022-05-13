#include <stdio.h>

int main(void) {
  int x, i, j, n, vezes, soma;

  scanf("%d", &vezes);

  soma = 0;

  for(j = 1; j <= vezes; j++) {
        scanf("%d", &x);
        n = (x / 2);
        soma = 0;

        for(i = 1; i <= n; i++) {
          if(x % i == 0) {
            soma+=i;
          }
        }

    if(soma == x) {
      printf("%d eh perfeito\n", x);
    }
    else {
      printf("%d nao eh perfeito\n", x);
    }
  }

    return 0;
}
