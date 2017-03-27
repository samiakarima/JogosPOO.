#include <iostream>

using namespace std;

int main () {
	   
	int linhas, colunas, opcao, continuar;
	bool r=true;
	
	
	cout << " ||||    ||||     |||||     |||||||||    ||||||||    |||||||||   ||||||||| " << endl;
	cout << "  ||\\    /||     ||| |||       |||       |||  |||       |||          ||||" << endl;
	cout << "  || \\  / ||    |||||||||      |||       ||||||||       |||        |||| " << endl;
	cout << "  ||  \\/  ||    |||   |||      |||       |||||||        |||       ||||      " << endl;
	cout << " ||||    ||||  ||||   ||||     |||       |||  ||||   |||||||||   |||||||||         " << endl;
	cout << endl;
	cout << "                   ||||||||     |||     |||     ||||||||        " << endl;
	cout << "                   |||         || ||    |||     |||             "             << endl;
	cout << "                   |||        |||||||   |||     |||              " << endl;
	cout << "                   |||       |||   |||  |||     |||                " << endl;
	cout << "                   |||||||| ||||   |||| ||||||| ||||||||      " << endl;
	
	
	cout << endl;
	cout << "Ola, este e o MATRIZ CALC, com as imformacoes cedidas por voce,usuario," << endl; 
	cout << "podemos mostrar-lhe o resultado de qualquer SOMA ou SUBTRACAO de matrizes," << endl;
	cout << "des que os valores dela sejam valores do tipo INTEIRO." << endl;
	cout << endl;
	
	system ("pause");
	system("cls");
	
	while(r==true) {
	

	cout << "Digite a quatidade de linhas das suas matrizes: " << endl;
	cin  >> linhas;
	
	cout << "Digite a quatidade de colunas das suas matrizes: " << endl;
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
			
			cout << "A[" << linha+1 << "]" << "[" << coluna+1 << "]: ";
			cin >> matrizA[linha][coluna];
	
}}
	//Percorrendo matriz e atribuindo valores para B.
	for(int linha=0; linha<linhas; linha++) {
		for(int coluna=0;coluna<colunas; coluna++) {
			
			cout << "B[" << linha+1 << "]" << "[" << coluna+1 << "]: ";
			cin >> matrizB[linha][coluna];
	
}}
	// Calculando Soma e exibindo em tela.
	for(int linha=0; linha<linhas; linha++) {
		for(int coluna=0;coluna<colunas; coluna++) {
			
			operacao[linha][coluna] = matrizA[linha][coluna] + matrizB[linha][coluna];

 			cout << " " << operacao[linha][coluna] << "    ";
 			
 			
 		}
 		cout << endl;
}


	// Opção 2, subtração.
	} else if (opcao == 2 ) {
			
		//Percorrendo matriz e atribuindo valores para A.
		for(int linha=0; linha<linhas; linha++) {
		for(int coluna=0;coluna<colunas; coluna++) {
			
			cout << "A[" << linha+1 << "]" << "[" << coluna+1 << "]: ";
			cin >> matrizA[linha][coluna];
	
}}
	//Percorrendo matriz e atribuindo valores para B.
	for(int linha=0; linha<linhas; linha++) {
		for(int coluna=0;coluna<colunas; coluna++) {
			
			cout << "B[" << linha+1 << "]" << "[" << coluna+1 << "]: ";
			cin >> matrizB[linha][coluna];
	
}}
	// Calculando Subtração e exibindo em tela.
	for(int linha=0; linha<linhas; linha++) {
		for(int coluna=0;coluna<colunas; coluna++) {
			
			operacao[linha][coluna] = matrizA[linha][coluna] - matrizB[linha][coluna];

 			cout << " " << operacao[linha][coluna] << "    ";
 		
 		}
 		cout << endl;
}
	// Caso se qualquer outro valor for recebido:
	} else {
		
		cout << "Operacao invalida! " << endl;
		
		system ("pause");
	}
	
	cout << "Deseja continuar? " << endl;
	cout << " 1 - Sim. " << endl;
	cout << " 2 - Nao " << endl;
	cin  >> continuar;
	
	if ( continuar == 2) {
			r=false;
	}	
}
}
