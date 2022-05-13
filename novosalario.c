#include <stdio.h>

int main() {
  double x, s, r;

  scanf("%lf", &x);

  if (0<= x && x <= 400){
    r = x * 0.15;
    s = x + r;
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %%\n", s, r);
  } else if (400< x && x <= 800){
    r = x * 0.12;
    s = x + r;
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %%\n", s, r);
  } else if(800< x && x <= 1200){
    r = x * 0.10;
    s = x + r;
   printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %%\n", s, r);
  } else if(1200< x && x <=2000){
    r = x * 0.07;
    s = x + r;
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %%\n", s, r);
  } else if (x > 2000){
    r = x * 0.04;
    s = x + r;
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %%\n", s, r);
  }
    return 0;
}
