#include <stdio.h>

int main() {
  double x, s, r;

  scanf("%lf", &x);


  if (0<= x && x <= 400){
    r = x * 0.15;
    s = x + r;
    printf("Novo salario: %.2lf\n", s);
    printf("Reajuste ganho: %.2lf\n", r);
    printf("Em percentual: 15 %%\n");
  } else if (400< x && x <= 800){
    r = x * 0.12;
    s = x + r;
    printf("Novo salario: %.2lf\n", s);
    printf("Reajuste ganho: %.2lf\n", r);
    printf("Em percentual: 12 %%\n");
  } else if(800< x && x <= 1200){
    r = x * 0.10;
    s = x + r;
    printf("Novo salario: %.2lf\n", s);
    printf("Reajuste ganho: %.2lf\n", r);
    printf("Em percentual: 10 %%\n");
  } else if(1200< x && x <=2000){
    r = x * 0.07;
    s = x + r;
    printf("Novo salario: %.2lf\n", s);
    printf("Reajuste ganho: %.2lf\n", r);
    printf("Em percentual: 7 %%\n");
  } else if (x > 2000){
    r = x * 0.04;
    s = x + r;
    printf("Novo salario: %.2lf\n", s);
    printf("Reajuste ganho: %.2lf\n", r);
    printf("Em percentual: 4 %%\n");
  }

    return 0;
}
