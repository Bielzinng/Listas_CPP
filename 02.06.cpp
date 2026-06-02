#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Soma e diferença entre dois vetores
    int A[4] = {2, 4, 6, 8};
    int B[4] = {1, 3, 5, 7};
    int C[4];
    
    for (int i = 0; i < 4; i++) {
        C[i] = A[i] + B[i];
        cout << C[i] << endl;
    }
    
    cout << endl;
    
    for (int i = 0; i < 4; i++) {
        C[i] = A[i] - B[i];
        cout << C[i] << endl;
    }
    
    cout << endl;
    
    // Produto escalar
    int A1[3] = {2, 3, 4};
    int B1[3] = {5, 6, 7};
    int produto = 0;
    
    for (int i = 0; i < 3; i++) {
        produto += A1[i] * B1[i];
    }
    
    cout << "Produto escalar: " << produto << endl;

    cout << endl;

    // Cálculo do ângulo entre vetores
    float A2[3] = {2, 3, 4};
    float B2[3] = {1, 0, 5};
    
    float produto2 = A2[0]*B2[0] + A2[1]*B2[1] + A2[2]*B2[2];
    
    float modA = sqrt(A2[0]*A2[0] + A2[1]*A2[1] + A2[2]*A2[2]);
    float modB = sqrt(B2[0]*B2[0] + B2[1]*B2[1] + B2[2]*B2[2]);
    
    float angulo = acos(produto2 / (modA * modB));
    
    cout << "Ângulo (radianos): " << angulo << endl;
    cout << "Ângulo (graus): " << angulo * 180 / M_PI << endl;
    
    cout << endl;
    
    // Soma de vetores com laço e operador ternário
    float A3[3], B3[3], soma[3];
    
    cout << "Digite os 3 elementos do vetor A:";
    
    for (int i = 0; i < 3; i++) {
        cin >> A3[i];
    }
 
    cout << "Digite os 3 elementos do vetor B:";
    
    for (int i = 0; i < 3; i++) {
        cin >> B3[i];
        soma[i] = A3[i] + B3[i];
    }
    
    cout << "Soma dos vetores: (";
    for (int i = 0; i < 3; i++)
    {
        cout << soma[i] << (i < 2 ? ", " : ")");
    }
    
    cout << endl;
    
    // Subtração de vetores
    float A4[3], B4[3], sub[3];
    cout << "Digite os 3 elementos do vetor A:";
    for (int i = 0; i < 3; i++) {
        cin >> A4[i];
    }
    
    cout << "Digite os 3 elementos do vetor B:";
    for (int i = 0; i < 3; i++) {
        cin >> B4[i];
        sub[i] = A4[i] - B4[i];
    }
    
    cout << "Subtração dos vetores: (";
    for (int i = 0; i < 3; i++) 
    {
        cout <<sub[i] << (i < 2 ? ", " : ")");
    }

    cout << endl;
    
    // Verificar se existe algum valor em um vetor
    int A5[5] = {3, 10, 7, 2, 8};
    int procurado = 10;
    bool encontrado = false;
    
    for (int i = 0; i < 5; i++) 
    {
        if (A5[i] == procurado) 
        {
            encontrado = true;
            break; // já achou, pode sair do laço
        }
    }
    
    if (encontrado) 
    {
        cout << "O elemento " << procurado << " existe no vetor.";
    }
    else 
    {
        cout << "O elemento " << procurado << " nao existe no vetor.";
    }
 
    return 0;
}
