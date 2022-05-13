#include <stdio.h>

int main() {

    int i, vezes, dias;
    float kg;

    scanf("%d", &vezes);

    for(i = 1; i <= vezes; i++) {
        scanf("%f", &kg);
        dias = 0;

        while (kg > 1.0) {
            kg /= 2;
            dias++;
        }

        printf("%d dias\n", dias);
    }

    return 0;
}
