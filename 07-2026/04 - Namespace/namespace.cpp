#include <iostream>

// É um método para impedir que haja conflitos de nomes entre diferentes bibliotecas ou partes do código.

namespace primeiro{
    int x = 1;
}

namespace segundo{
    int x = 2;
}

int main(){
    // Caso necessário, é possível utilizar "using namespace primeiro;". Assim, o compilados assume que o x utilizado é o da namespace primeiro. 

    // Outro jeito de otimizar código é:
    using std::cout;
    using std::endl;
    //Desse jeito, não é necessário escrever std:: antes desses comandos específicados.

    int x = 0;

    cout << x << endl;
    cout << primeiro::x << endl;
    cout << segundo::x;

    return 0;
}