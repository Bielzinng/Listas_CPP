#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string s_produto, i_quantidade, f_preco;
  
    cout << "Digite o seu produto: ";
    cin >> s_produto;
  
    cout << "Digite a quantidade: ";
    cin >> i_quantidade;
  
    cout << "Digite o preço unitário: ";
    cin >> f_preco;
    
    cout << "O seu produto é " << s_produto << endl;
    cout << "A quantidade é " << i_quantidade << endl;
    cout << "O preço unitário é " << f_preco << endl;    
  
    return 0;
}
