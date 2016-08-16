#include <iostream>
#include <string>
using namespace std;

void enderecos(string notas[3], string endereco[3]);

int main() {
    string nome[3];
    string endereco[3];
    for (int pos=0; pos < 3; pos++) {
     
     cout << "Digite o nome: " << pos+1 << endl;
     cin >> nome[pos];
        
    }
     for (int pos=0; pos < 3; pos++) {
     
     cout << "Digite o endereco: " << pos+1 << endl;
     cin >> endereco[pos];
        
    }
    
     enderecos(nome, endereco);
    
 
}
void enderecos(string nome[3], string endereco[3]) {

     for (int pos=0; pos < 5; pos++) {
       
      cout << nome[pos] << " mora na rua " << endereco[pos] << endl;
       
    } 
   
}
