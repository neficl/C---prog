#include <stdio.h>

int main(void){
    int i, j=0, tamanho;
    char risada[60], graca[60];

        scanf("%s", risada);

        for( i = 0; risada[i]; i++){
            if(risada[i]=='a' || risada[i]=='e' || risada[i]=='i' || risada[i]=='o' || risada[i]=='u')
            {
                graca[j] = risada[i];
                j++;
            }
        }
        graca[j] = '\0';

        tamanho = strlen(graca);

        for(i = 0, j = tamanho-1; i < tamanho; i++, j--){
            if(graca[i] != graca[j]) {
                printf("N\n");
                return 0;
            }
        }

        printf("S\n");

    return 0;
}
