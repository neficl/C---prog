#include<stdio.h>
int main()
{
 int numero, maiorn, menorn, total;

 numero = 1;
 maiorn=menorn=total=0;
 while(numero !=0){
 printf("Digite um numero, zero ira finalizar o programa: ");
 scanf("%d", &numero);
 total = total +1;

if(total == 1){
    maiorn = numero;
}

 if(total == 1){
 menorn=numero;
 }
 if(numero != 0){
    if(numero>= maiorn){
        maiorn = numero;
 } if (numero<= menorn){
    menorn = numero;
 }
 }
 }
 printf("%d %d", menorn, maiorn);


 return 0;
}
