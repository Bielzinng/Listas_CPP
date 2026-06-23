#include <iostream>

using namespace std;

struct Node {
 int dado;
 Node* prox;
};

void inserirInicio(Node*& head, int valor) {
 Node* novo = new Node{valor, head};
 head = novo;
}

void imprimirLista(Node* head) {
 Node* atual = head;
  
 while (atual != nullptr) 
 {
   cout << atual->dado << " -> ";
   atual = atual->prox;
 }
  
 cout << "NULL";
}

int main() {
 Node* head = nullptr;
  
 inserirInicio(head, 10);
 inserirInicio(head, 20);
 inserirInicio(head, 5);
 imprimirLista(head);
  
 return 0;
}
