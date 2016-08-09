//VETORES E MATRIZES 03/08.
/* O quê são vetores?
Com os vetores podemos armazenar mais informações, é um conjunto informações (variaveis).*/
/*O quê é uma matriz?
Uma matriz é um conjunto de vetores, com mais de um vetor já forma-se uma delas.*/
#include <iostream>
#include <string>
using namespace std;

/*Em português: Definir, porém pode ser lido como criar constante.
As constantes são valores fixos guardados na memória e não mudarão, ao contrario das variáveis,
o ponto e virgula é opcional.
Deve ser em maiusculo, não obrigatoriamente, mas somente por questão de organização
pois torna-se mais simples diferenciar constantes de variaveis.
a sua estrutura é: "#define NOME_DA_CONSTANTE valor"
Não deve ser repetido, é apenas uma linha pra cada constante.
Com elas podem reduzir grandes valores inveriaveis em determinados tipos de programa.
*/
#define TAMANHO 5
int main () {
	
	//Como declarar um vetor?
	//Adicionando valores estaticamente.
	int notas[TAMANHO]= { 100, 80, 60, 40, 20 }; //Cria o vetor "notas" e armazena as notas dentro deste vetor.

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
	
	//Adicionando valores dinamicamente.
	int notas2[TAMANHO];
	
	for(int pos=0; pos<TAMANHO; pos++){
		
		cout << "Digite o valor da posicao: " << pos << endl;
		cin >> notas2[pos];
		
	}	
	
	for(int pos=0; pos<TAMANHO; pos++)
{
	cout << notas2[pos] << " ";

}
//MATRIZES:
/*Na programação, matrizes são iguais a da matemática, são compostas
por mais de um vetor, as posições possuem o mesmo esquema dos vetores,
porém eles possuem duas delas as linhas e as colunas usamos o formato 
m[linha][coluna], elas podem ter tamanhos diferentes de linhas e colunas e 
podem ser ultilizadas com qualquer tipos de variaveis, para alterar valores é 
semelhante ao processo ultilizado no vetor, adicionando dinamicamente da mesma forma,
porém ultilizando dois fors, para ultilizar constante, porém necessario duas constantes.*/


	int matriz[3][3]= {
		{ 5, 8, -2},
		{11, 0, 0 },
		{ 2, 3, 9 },
	
	};
	//For alinhado,para cada linha percorre-se uma coluna.
		for(int linha=0;linha<3;linha++) {
		
			for(int coluna=0; coluna<3; coluna++){
				
				cout << matriz[linha][coluna] << " " ;		
			
			}
			cout << endl;
		}
}	
