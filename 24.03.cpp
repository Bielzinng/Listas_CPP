#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s_produto = "carros";
    int i_quantidade = 15;
    double d_preco = 149999.99;

    cout << "Temos " << i_quantidade << " " << s_produto << " por R$" << d_preco << endl;
    cout << "O produto é " << s_produto << endl;
    cout << "A quantidade é " << i_quantidade << endl;
    cout << "O preço é " << d_preco << endl;
    
    return 0;
}
