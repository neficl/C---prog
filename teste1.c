#include <stdio.h>

int main(void){

    int x;
    printf("Insira o tempo em segundos: ");
    scanf("%d", &x);

    int horas, minutos, segundos, y, z;
	y = 3600;
	z = 60;
    horas = (x / y);
    minutos = (x % y) / z;
    segundos = (x % y) % z;
    printf("%d:%d:%d", horas, minutos, segundos);

    return 0;
}
