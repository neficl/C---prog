#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

class Funcionario
{
    public:
        Funcionario();
        std::string nome, sobrenome;
        float salarioMensal;

        float getSalarioAnual();
};

#endif // FUNCIONARIO_H
