#include <iostream>

int main() {
    // "Const" especifíca que o valor de uma variável é constante, mostrando ao compilador que nada pode alterar o valor dessa variável. Basicamente se tornando uma variável somente leitura.

    // Exemplo: Cálculo de Circunferência de um círculo
    const double PI = 3.14159; // Constante que representa o valor de pi, uma variável que não pode ser alterada durante a execução do programa.
    double raio = 10;
    double circunferencia = 2 * PI * raio;

    std::cout << "Circunferência: " << circunferencia << "cm";

    return 0;
}