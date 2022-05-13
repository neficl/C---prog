#include <stdio.h>
#include <string.h>
#include <fstream>

using namespace std;

int main(){

    ofstream arquivoDeSaida;

    arquivoDeSaida.open("texto.txt", std::ios_base::app);

    arquivoDeSaida << "Néfi é Lindo";

    arquivoDeSaida.close();

    return 0;
}
