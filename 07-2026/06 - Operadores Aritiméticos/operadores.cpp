#include <iostream>

int main() {
    int alunos = 20;
    int maçãs = 3;
    int largura = 2;
    

    alunos = alunos + 5; // Adiciona 5 alunos
    maçãs+=2; // Adiciona 2 maçãs
    largura++; // Adiciona 1 à largura

    alunos = alunos - 2; // Remove 2 alunos
    maçãs-=2; // Remove 2 maçãs
    largura--; // Remove 1 da largura

    alunos = alunos * 3; // Multiplica por 3
    maçãs*=2; // Multiplica por 2

    alunos = alunos / 2; // Divide por 2
    maçãs/=2; // Divide por 2

    std::cout << "Alunos: " << alunos << std::endl; // Nesse caso, o número de alunos deveria ser 34,5. Mas como alunos é inteiro, o resultado será 34.
    std::cout << "Maçãs: " << maçãs << std::endl;
    std::cout << "Largura: " << largura << std::endl;

    // Operadores de resto da divisão
    int resto = alunos % 3; // Resto da divisão de alunos por 3

    std::cout << "Caso a sala seja dividida em grupos de 3 alunos, restarão " << resto << " alunos." << std::endl;

    // Uso de parenteses para alterar a ordem das operações
    int resultado = (alunos + maçãs) * largura; // Primeiro soma alunos e maçãs, depois multiplica pelo valor de largura

    std::cout << "Resultado: " << resultado << std::endl;

    return 0;
}