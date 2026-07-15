#include <iostream>

int main() {
    // Conversão de tipos se refere a transformar um dado de um tipo para outro de forma implícita (automática) ou explícita (manual).

    double x = (int) 3.14; // 3,14 -> 3 (conversão explícita de double para int)
    int y = 5.4; // 5,4 -> 5 (conversão implícita de double para int)

    char z = 100; // 100 -> 'd' (conversão implícita de int para char, onde 100 é o código ASCII do caractere 'd')

    std::cout << "Valor de x: " << x << std::endl;
    std::cout << "Valor de y: " << y << std::endl;
    std::cout << "Valor de z: " << z << std::endl;
    std::cout << "Usar char 100, também retornaria: " << (char) 100 << std::endl;

    // Exemplo de utilização prática:

    int questoesCorretas = 8;
    int questoesTotais = 10;
    double nota = questoesCorretas/(double)questoesTotais * 100;

    std::cout << "Nota: " << nota << "%" << std::endl;

    return 0;
}