#include "Funcionario.h"

Funcionario::Funcionario()
{
    //ctor
}

float Funcionario::getSalarioAnual(){

    return salarioMensal * 12;
}
