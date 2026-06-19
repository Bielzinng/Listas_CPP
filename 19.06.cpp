#include <iostream>

using namespace std;

int main(int argc, char* argv[]) // Escreva no terminal: ./programa aprendendo argc e argv em cpp. Capture a posição 2 e exiba com cout.
{
    if (argc > 2) {
        cout << "O argumento na posição 2 é: " << argv[2] << endl;
    } else {
        cout << "Você precisa passar pelo menos 3 argumentos!" << endl;
    }
    
    return 0;
}
