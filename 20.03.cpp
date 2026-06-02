#include <iostream>
#include <vector>

using namespace std;

int main() {
  float f_num[2];

  for (int i = 0; i < 2; i++) 
  {
    cout << "Digite o " << (i + 1) << "° número: ";
    cin >> f_num[i];
  }
  
  cout << "A soma é " << (f_num[0]+f_num[1]);
  
  return 0;
}
