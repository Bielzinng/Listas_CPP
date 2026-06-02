#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() 
{
    string s_alunos[10] = {
        "Ana Silva",
        "Bruno Santos",
        "Carlos Oliveira",
        "Daniela Souza",
        "Eduardo Lima",
        "Fernanda Costa",
        "Gabriel Pereira",
        "Helena Rodrigues",
        "Igor Almeida",
        "Juliana Ribeiro"
    };
    double d_notas[10] = {
        8.5,
        7.0,
        9.2,
        6.5,
        10.0,
        5.8,
        7.4,
        8.0,
        4.5,
        9.5
    };
  
    cout << "Aluno 5: " << s_alunos[4] << " | Nota: " << d_notas[4] << endl;
    
  return 0;
}
