#include <iostream>
#include <string>

using namespace std;

float f_soma(float f_num[]) 
{
    return f_num[0]+f_num[1];
}

int main() 
{
    float f_num[2];
  
    for (int i = 0; i < 2; i++) 
    {
        cout << "Digite o " << i + 1 << "° valor: ";
        cin >> f_num[i];
    }
  
    cout << "A soma é " << f_soma(f_num) << endl;
  
    return 0;
}
