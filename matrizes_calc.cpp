#include <iostream>

using namespace std;

int main () {
	
	int linhas, colunas, opcao;
	
	cout << "Digite a quatidade de linhas da suas matrizes: " << endl;
	cin  >> linhas;
	
	cout << "Digite a quatidade de colunas da sua matrizes: " << endl;
	cin  >> colunas;
	
	int matrizA[linhas][colunas];
	
	int matrizB[linhas][colunas];
	
	int operacao[linhas][colunas];
	
	//Menu principal.
	cout << "Qual operacao deseja executar? " << endl;
	cout << " 1 - Adicao. " << endl;
	cout << " 2 - Subtracao. " << endl;
	cin  >> opcao;
	
	//Selecionando opção.
	//Opção 1, adição.
	if (opcao == 1) {
	
	//Percorrendo matriz e atribuindo valores para A.
	
	for(int linha=0; linha<linhas; linha++) {
		for(int coluna=0;coluna<colunas; coluna++) {
			
			cout << "A[" << linha << "]" << "[" << coluna << "]: ";
			cin >> matrizA[linha][coluna];
	
}}
	//Percorrendo matriz e atribuindo valores para B.
	for(int linha=0; linha<linhas; linha++) {
		for(int coluna=0;coluna<colunas; coluna++) {
			
			cout << "B[" << linha << "]" << "[" << coluna << "]: ";
			cin >> matrizB[linha][coluna];
	
}}
	// Calculando Soma e exibindo em tela.
	for(int linha=0; linha<linhas; linha++) {
		for(int coluna=0;coluna<colunas; coluna++) {
			
			operacao[linha][coluna] = matrizA[linha][coluna] + matrizB[linha][coluna];

 			cout << " " << operacao[linha][coluna] << "    ";
 			
 			system("pause");
 		}
 		cout << endl;
}


	// Opção 2, subtração.
	} else if (opcao == 2 ) {
			
		//Percorrendo matriz e atribuindo valores para A.
		for(int linha=0; linha<linhas; linha++) {
		for(int coluna=0;coluna<colunas; coluna++) {
			
			cout << "A[" << linha << "]" << "[" << coluna << "]: ";
			cin >> matrizA[linha][coluna];
	
}}
	//Percorrendo matriz e atribuindo valores para B.
	for(int linha=0; linha<linhas; linha++) {
		for(int coluna=0;coluna<colunas; coluna++) {
			
			cout << "B[" << linha << "]" << "[" << coluna << "]: ";
			cin >> matrizB[linha][coluna];
	
}}
	// Calculando Subtração e exibindo em tela.
	for(int linha=0; linha<linhas; linha++) {
		for(int coluna=0;coluna<colunas; coluna++) {
			
			operacao[linha][coluna] = matrizA[linha][coluna] - matrizB[linha][coluna];

 			cout << " " << operacao[linha][coluna] << "    ";
 			system ("pause");
 		}
 		cout << endl;
}
	// Caso se qualquer outro valor for recebido:
	} else {
		
		cout << "Operacao invalida! " << endl;
		
		system ("pause");
	}
		
}
