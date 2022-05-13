#include <iostream>
#include <stdio.h>
#include <locale.h>

using namespace std;

void Menu(){
    cout << "\t---Seja Bem Vindo ao Pac-Man---"<< endl;
    cout << "\t          1- Novo Jogo           "<< endl;
    cout << "\t          2- Tutorial            "<< endl;
    cout << "\t          3- Top Scores          "<< endl;
    cout << "\t          4- Créditos            "<< endl;
    cout << "\t          5- Sair                "<< endl;
}

void Creditos(){
    cout << "\t*******Universidade Federal da Paraíba********\n"<<endl;
    cout << "\tNELLY STANFORD FERNANDES MARTINS - 20200020083"<< endl;
    cout << "\tNÉFI COELHO LEITE                - 20190030796"<< endl;
    cout << "\tMARCO ANTONIO CUNHA COSSETIN     - 20200011020\n"<< endl;
}

void Saida(){
    cout <<"Obrigado por jogar!" << endl;
}

int main(){
    int opcao;
    setlocale(LC_ALL,"");

    while(1){
        cout <<"\t\t Escolha uma opção\n \t\t"<< endl;
        Menu();
        cin >> opcao;
        switch(opcao){
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                Creditos();
                break;
            case 5:
                Saida();
                return 1;
                break;
            default:
                cout <<"\tNúmero errado, digite novamente\t\n" << endl;
                break;
        }
    }


    return 0;
}
