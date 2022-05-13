/*
 ============================================================================
 Name        : 1520.c
 Author      : N�fi Coelho Leite - 20190030796
 Version     : 1.0
 Description : 1520 - Gerando o E-mail
 ============================================================================
 */
#include <stdio.h> //Declaramos as fun��es que iremos utilizar para digita��o, leitura e manipula��o das strings.
#include <string.h>

void GeraEmail(const char *nome, char *email){ //Utilizamos a funcao void, que n�o retorna nenhum valor, sendo assim utilizamos ponteiros para armazenar determinado valor em seu endere�o.
    int i, j = 1; // Variaveis responsaveis pelo funcionamento do la�o for, assim como o armazenamento das letras em cada campo da da string, que ser� incrementada pelo j.
    char copia[101]; //String criada para copiar as iniciais dos nomes e por consiguente repassar para o endere�o email.

    copia[0] = nome[0]; //J� inciamos contando e adicionando a primeira letra do nome.
    for(i = 0; nome[i] != '\0'; i++){ //O la�o for funcionar� at� encontrar o caractere nulo, respons�vel por encerrar a string.
        if(nome[i] == ' '){ //Ao entramos na condi��o if, ela ser� responsavel por adicionar as letras inicias ap�s os espa�os, entre o nome e sobrenomes.
            copia[j] = nome[i+1];
            j++;
        }
    }
    strcpy(email, copia); //Copiamos a nossa copia que guarda as letras iniciais dos nomes para o email.
    strcat(email, "@academico.ufpb.br"); //Por fim concatenamos nossas letras com o endere�o de email da ufpb. Por consiguente,esse endere�o de email � enviado para fun��o main.
}

int main(void){
    char nome[101], email[101]; //Implementa��o das variaveis que ser� o nome da pessoa responsavel pelo email criado.

    fgets(nome, 101, stdin); //Leitura do nome para cria��o do email.
    GeraEmail(nome, email); //Chamamos a fun��o responsavel por gerar o email a partir das inciais dos nomes.
    puts(email); //Impressao do email.

    return 0;
}
