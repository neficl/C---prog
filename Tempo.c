#include <stdio.h>

int main(void) {
    int segundos, minutos, hora, resto;

    printf("Que horas sao em segundos: ");
    scanf("%d", &segundos);

    hora = segundos / 3600;
    resto = segundos % 3600;
    minutos = resto / 60;
    segundos = resto % 60;
    printf("%d:%d:%d\n", hora, minutos, segundos);

    return 0;
}
