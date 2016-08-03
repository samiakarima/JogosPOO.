//VETORES E MATRIZES 03/08.
/* O quê são vetores?
Com os vetores podemos armazenar mais informações, é um conjunto informações (variaveis).*/
/*O quê é uma matriz?
Uma matriz é um conjunto de vetores, com mais de um vetor já forma-se uma delas.*/
#include <iostream>
#include <string>
using namespace std;

int main () {
	
	//Como declarar um vetor?
	int notas[5]= { 100, 80, 60, 40, 20 }; //Cria o vetor "notas" e armazena as notas dentro deste vetor.

	//Como acessar os valores de um vetor?
	int primeira_nota = notas[0];
	cout << "Primeira nota: " << primeira_nota << endl;

	// Ou simplismente.
	cout << "Terceira nota: " << notas[2] << endl;
	
	cout << "Quinta nota: " << notas[4] << endl;
	
	//IMPORTANTE, sempre iniciamos o vetor da posição zero
	
	
	 char texto[9]= {'O', 'l' , 'a',' ', 'm', 'u', 'n' , 'd', 'o'};
	for (int pos=0;  pos<9; pos++) {
		cout << texto[pos];
	}
}	
