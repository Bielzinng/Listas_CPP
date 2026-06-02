#include <iostream>

using namespace std;

int main() 
{
  int numero = 10;
  int* ponteiro;
  ponteiro = &numero;

  cout << "Valor da variavel: " << numero << endl;
  cout << "Endereco da variavel: " << &numero << endl;
  cout << "Valor apontado pelo ponteiro: " << *ponteiro << endl;
  
  return 0;
}
