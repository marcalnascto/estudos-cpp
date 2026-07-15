#include <iostream>
#include <vector>

// typedef std::string texto_t;
// typedef int numero_t;

 // "using" é uma forma mais moderna de criar um "apelido" para um tipo de dado.
using texto_t = std::string;
using numero_t = int;

int main(){
    
    // "typedef" é uma palavra reservada que serve para criar um "apelido" para um tipo de dado.

    // Ao invés de escrever "std::string Nome", eu posso usar:

    texto_t nome = "Marçal";
    numero_t idade = 17;

    std::cout << nome << "\n";
    std::cout << idade << "\n";

    return 0;
}