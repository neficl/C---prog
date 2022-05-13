#include <stdio.h>

int main(void){ // Néfi

    int numero, contador, razaopg, razaopa, a1, a2; // Vamos adicionar algumas variaveis (numero, contador:quantas vezes está sendo executado o programa, razaopg, razaopa, a1= primeiro termo, a2 = segundo termo.

    scanf("%d\n", &a1); //Recebemos os valores e guardamos em nossa memoria.
    scanf("%d\n", &a2);

    contador = 2;
    razaopa = a2 - a1; // Encontramos as razões.
    razaopg = a2 / a1;

    scanf("%d\n", &numero); // Solicitamos um novo numero para o nosso bloco do while e nossa sequência númerica.

    while(numero >= 0){
        scanf("%d\n", &numero); // Solicitamos um novo numero para o nosso bloco do while e nossa sequência númerica.
        contador++; // aumentamos o numero de execuções.
            if(numero == (a1 + razaopa * (contador-1)) && numero == (a1*pow(razaopg, contador -1))){
                printf("PA com %d termos e razao %d.\n", contador, razaopa);
                printf("PG com %d termos e razao %d.\n", contador, razaopg);
            }else if(numero == (a1 + razaopa * (contador-1))){ // Termo que se refere a uma pa
                printf("PA com %d termos e razao %d.\n", contador, razaopa);
            }else if (numero == (a1*pow(razaopg, contador -1))){ // termo que se refere a uma pg
                printf("PG com %d termos e razao %d.\n", contador, razaopg);
            }else{
                printf("Sequencia com %d termos.", contador);
            }

    }

    return 0;
}


