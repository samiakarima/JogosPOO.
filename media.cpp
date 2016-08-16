#include <iostream>
using namespace std;
float calc_media(float notas[5]);
int main() {
    float notas[5];
    float media;
    for (int pos=0; pos < 5; pos++) {
     
     cout << "Digite a nota " << pos+1 << endl;
     cin >> notas[pos];
        
    }
    
    media=calc_media(notas);
    
    cout <<"Media = " << media << endl;
 
    
    
}
float calc_media(float notas[5]) {
         int soma=0;
     for (int pos=0; pos < 5; pos++) {
       
        soma+=notas[pos];
       
    } 
    return soma/5;
}
