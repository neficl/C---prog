#include <stdio.h>
#include <locale.h>
int main (void){

    int i;

    setlocale(LC_ALL,"portuguese");

    for (i = 1; i <= 200; i = i + 1){

        if( i % 2 ==1){
            printf("Quem n�o escreve programas n�o aprende a programar\n", i);
        } else if (i % 2 == 0){
            printf("S� aprende a programar quem escreve programas\n", i);
        }
    }

    return 0;

}
