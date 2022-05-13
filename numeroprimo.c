#include <stdio.h>

int main(void) {
  int i, j, n, vezes, soma;

  scanf("%d", &vezes);

  for(j = 0; j < vezes; j++) {
      scanf("%d", &n);

      soma = 0;

        for(i = 1; i <= n; i++) {
          if(n % i == 0) {
            soma++;
          }
        }

    if(soma == 2) {
      printf("%d eh primo\n", n);
    }
    else {
      printf("%d nao eh primo\n", n);
    }
  }

    return 0;
}
