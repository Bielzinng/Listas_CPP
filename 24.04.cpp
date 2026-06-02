#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
  string s_produto = "Teclado Mecânico RGB";
  int i_quantidade = 45;
  double d_preco = 259.90;

  cout << "Produto: " << s_produto << endl;
  cout << "Quantidade: " << i_quantidade << " unidades" << endl;

  cout << fixed << setprecision(2);
  cout << "Preço un.:  R$ " << d_preco << endl;
  
  return 0;
}
