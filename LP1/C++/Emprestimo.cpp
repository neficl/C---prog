#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int prestacoes;
    float salario, emprestimo, valorPrestacao;

    do{
       cin >> salario;
    }while(salario <= 0);
    do{
       cin >> emprestimo;
    }while(emprestimo <= 0);
    do{
       cin >> prestacoes;
    }while(prestacoes <= 0);

    valorPrestacao = emprestimo / prestacoes;

    if(valorPrestacao <= salario * 0.3){
        cout << "Emprestimo pode ser concedido" << endl;
    }else{
        cout << "Emprestimo nao pode ser concedido" << endl;
    }

    return 0;
}
