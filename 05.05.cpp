#include <iostream>

using namespace std;

void dobrar(int* ptr) 
{
    *ptr = (*ptr) * 2;
}

int main() 
{
  int valor = 5;
  
  cout << "Valor inicial: " << valor << endl;
  dobrar(&valor);
  cout << "Valor após chamar a função dobrar: " << valor << endl;
  
  return 0; 
}
