#include <stdio.h>
#include <string.h>
#include <fstream>

using namespace std;

int main(){

    ofstream meuArquivo;

    meuArquivo.open("Festa.txt");

    meuArquivo << "";

    meuArquivo.close();

    return 0;
}
