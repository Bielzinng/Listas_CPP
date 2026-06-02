#include <iostream>

using namespace std;

int main() 
{
    int a;
  
    cout << sizeof(a) << endl;
  
    int *p = new int;
    int *v = new int[10]; 
  
    cout << sizeof(*p) << endl;
    cout << 10*sizeof(*v) << endl;
    
    delete p;
    delete[] v;    
  
    return 0;
}
