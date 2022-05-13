#include<stdio.h>

int main(void) {
    int idade, jovem, adulta, idosa;

    printf("Digite a sua idade: \n");
    scanf("%d", &idade);

    if (idade < 21){
        puts("Voce eh uma jovem! ");
    }else if ( 21 <= idade && idade < 60){
        puts("Voce eh uma adulta! ");
    }else {
        puts("Voce eh uma idosa!");
    }

return 0;
}
