#include <iostream>

using namespace std;

void triplicarReferencia(int &n) 
{
    n = n * 3;
}

void triplicarPonteiro(int *ptr) 
{
    *ptr = (*ptr) * 3;
}

int main() 
{
    int i_num = 10;
    int i_num2 = 10;

    triplicarReferencia(i_num);
    cout << "Resultado por Referencia: " << i_num << endl;

    triplicarPonteiro(&i_num2);
    cout << "Resultado por Ponteiro: " << i_num2 << endl;
    return 0;
}
