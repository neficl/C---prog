#include <stdio.h>
#include <string.h>
#include <fstream>
#include <iostream>

using namespace std;

int main(){

    ifstream input("Festa.txt");

    string textoLido;

    for(string line; getline(input, line);){
        textoLido += line;
    }

    cout << textoLido;

    return 0;
}
