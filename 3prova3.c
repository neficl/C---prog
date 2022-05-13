/*
 ============================================================================
 Name        : 1520.c
 Author      : Néfi Coelho Leite - 20190030796
 Version     : 1.0
 Description : 1520 - Gerando o E-mail
 ============================================================================
 */
#include <stdio.h> //Declaramos as funções que iremos utilizar para digitação, leitura e manipulação das strings.
#include <string.h>

void GeraEmail(const char *nome, char *email){ //Utilizamos a funcao void, que não retorna nenhum valor, sendo assim utilizamos ponteiros para armazenar determinado valor em seu endereço.
    int i, j = 1; // Variaveis responsaveis pelo funcionamento do laço for, assim como o armazenamento das letras em cada campo da da string, que será incrementada pelo j.
    char copia[101]; //String criada para copiar as iniciais dos nomes e por consiguente repassar para o endereço email.

    copia[0] = nome[0]; //Já inciamos contando e adicionando a primeira letra do nome.
    for(i = 0; nome[i] != '\0'; i++){ //O laço for funcionará até encontrar o caractere nulo, responsável por encerrar a string.
        if(nome[i] == ' '){ //Ao entramos na condição if, ela será responsavel por adicionar as letras inicias após os espaços, entre o nome e sobrenomes.
            copia[j] = nome[i+1];
            j++;
        }
    }
    strcpy(email, copia); //Copiamos a nossa copia que guarda as letras iniciais dos nomes para o email.
    strcat(email, "@academico.ufpb.br"); //Por fim concatenamos nossas letras com o endereço de email da ufpb. Por consiguente,esse endereço de email é enviado para função main.
}

int main(void){
    char nome[101], email[101]; //Implementação das variaveis que será o nome da pessoa responsavel pelo email criado.

    fgets(nome, 101, stdin); //Leitura do nome para criação do email.
    GeraEmail(nome, email); //Chamamos a função responsavel por gerar o email a partir das inciais dos nomes.
    puts(email); //Impressao do email.

    return 0;
}
