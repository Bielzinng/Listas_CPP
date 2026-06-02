#include <iostream>

using namespace std;

int main() 
{
    int* ptr = new int;
  
    cout << "Digite um valor inteiro: ";
    cin >> *ptr;
  
    cout << "O valor alocado foi: " << *ptr << endl;
    cout << "Endereco de memoria: " << ptr << endl;
  
    delete ptr;
  
    return 0;
}
