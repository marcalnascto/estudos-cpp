#include <iostream>

int main() {
    //int (números inteiros)
    int idade = 30;

    //double (números c/ decimais)
    double salario = 4580.50;

    //char (caracteres isolados)
    char sexo = 'F';

    //bool (valores y/n)
    bool casado = false;

    //string (texto)
    std::string nome = "Maria";

    std::cout << nome << " tem " << idade << " anos, recebe $" << salario << " e é do sexo " << sexo << '\n';

    return 0;
}