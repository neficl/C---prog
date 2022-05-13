#include <iostream>
#include "Funcionario.h"

using namespace std;

int main(){
    int quantidade, i;

    cin >> quantidade;

    Funcionario vet[quantidade];

    for(i = 0; i < quantidade; i++){
        cin >> vet[i].nome;
        cin >> vet[i].sobrenome;
        cin >> vet[i].salarioMensal;
    }

    for(i = 0; i < quantidade; i++){
        cout << vet[i].nome << " " << vet[i].sobrenome << " - " << vet[i].salarioMensal << " - " << vet[i].getSalarioAnual() << endl;
    }

    return 0;
}
