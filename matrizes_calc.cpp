//Incluindo a biblioteca <iostream>
#include <iostream>

using namespace std;

int main () {
	  
	//Declarando variáveis.
	int linhas, colunas, opcao, continuar;
	bool r=true, p = true;
	
	//Exibindo breve introduçao ao programa.
	cout << " ||||    ||||     |||||     |||||||||    ||||||||    |||||||||   |||||||||   " << endl;
	cout << "  ||\\    /||     ||| |||       |||       |||  |||       |||          ||||   " << endl;
	cout << "  || \\  / ||    |||||||||      |||       ||||||||       |||        ||||     " << endl;
	cout << "  ||  \\/  ||    |||   |||      |||       |||||||        |||       ||||      " << endl;
	cout << " ||||    ||||  ||||   ||||     |||       |||  ||||   |||||||||   |||||||||   " << endl;
	cout << endl;
	cout << "                   ||||||||     |||     |||     |||||||| " << endl;
	cout << "                   |||         || ||    |||     |||      " << endl;
	cout << "                   |||        |||||||   |||     |||      " << endl;
	cout << "                   |||       |||   |||  |||     |||      " << endl;
	cout << "                   |||||||| ||||   |||| ||||||| |||||||| " << endl;
	
	
	cout << endl;
	cout << "Ola, este e o MATRIZ CALC, com as imformacoes cedidas por voce,usuario," << endl; 
	cout << "podemos mostrar-lhe o resultado de qualquer SOMA ou SUBTRACAO de matrizes," << endl;
	cout << "des que os valores dela sejam valores do tipo RACIONAL." << endl;
	cout << endl;
	
	//Pausando a execuçao do programa.
	system ("pause");
	//Limpando a tela.
	system("cls");
	
	//Loop para dar possibilidade ao úsuario do programa se repetir.
	while(r==true) {
	
	//Pede ao úsuario a quatidade de linhas.
	cout << "Digite a quatidade de linhas das suas matrizes: " << endl;
	//Recebe a quatidade de linhas
	cin  >> linhas;
	//Pede ao úsuario a quatidade colunas.
	cout << "Digite a quatidade de colunas das suas matrizes: " << endl;
	//Recebe a quatidade de colunas.
	cin  >> colunas;
	
	//Cria as matrizes de acordo com a quatidade de linhas e colunas digitadas pelo úsuario.
	float matrizA[linhas][colunas];
	
	float matrizB[linhas][colunas];
	
	float operacao[linhas][colunas];
	
	//Exibe em tela o menu principal, o qual o úsuario enviará sua opção entre soma ou subtração.
	cout << "Qual operacao deseja executar? " << endl;
	cout << " 1 - Adicao. " << endl;
	cout << " 2 - Subtracao. " << endl;
	//Recebe a opção.
	cin  >> opcao;
	
	//Selecionando opção.
	//Opção 1, adição.
	if (opcao == 1) {
	
	//Percorrendo matriz e atribuindo valores para A.
	
	for(int linha=0; linha<linhas; linha++) {
		for(int coluna=0;coluna<colunas; coluna++) {
			//Exibe em tela a parte da matriz a qual o programa está pedindo.
			cout << "A[" << linha+1 << "]" << "[" << coluna+1 << "]: ";
			//Recebe a quatidade digitada pelo úsuario em certo local da matriz.
			cin >> matrizA[linha][coluna];
	
}}
	//Percorrendo matriz e atribuindo valores para B.
	for(int linha=0; linha<linhas; linha++) {
		for(int coluna=0;coluna<colunas; coluna++) {
			//Exibe em tela a parte da matriz a qual o programa está pedindo.
			cout << "B[" << linha+1 << "]" << "[" << coluna+1 << "]: ";
			//Recebe a quatidade digitada pelo úsuario em certo local da matriz.
			cin >> matrizB[linha][coluna];
	
}}
	// Calculando Soma e exibindo em tela.
	for(int linha=0; linha<linhas; linha++) {
		for(int coluna=0;coluna<colunas; coluna++) {
			//Atribui o valor de ambas as amtrizes executando a operação de soma entre elas em uma matriz diferente.
			operacao[linha][coluna] = matrizA[linha][coluna] + matrizB[linha][coluna];
			//Essa matriz mostra os resultados em tela logo após.
 			cout << " " << operacao[linha][coluna] << "    ";
 			
 			
 		}
 		cout << endl;
}


	// Opção 2, subtração.
	} else if (opcao == 2 ) {
			
		//Percorrendo matriz e atribuindo valores para A.
		for(int linha=0; linha<linhas; linha++) {
		for(int coluna=0;coluna<colunas; coluna++) {
			//Recebe a quatidade digitada pelo úsuario em certo local da matriz.
			cout << "A[" << linha+1 << "]" << "[" << coluna+1 << "]: ";
			//Recebe a quatidade digitada pelo úsuario em certo local da matriz.
			cin >> matrizA[linha][coluna];
	
}}
	//Percorrendo matriz e atribuindo valores para B.
	for(int linha=0; linha<linhas; linha++) {
		for(int coluna=0;coluna<colunas; coluna++) {
			//Recebe a quatidade digitada pelo úsuario em certo local da matriz.
			cout << "B[" << linha+1 << "]" << "[" << coluna+1 << "]: ";
			//Recebe a quatidade digitada pelo úsuario em certo local da matriz.
			cin >> matrizB[linha][coluna];
	
}}
	// Calculando Subtração e exibindo em tela.
	for(int linha=0; linha<linhas; linha++) {
		for(int coluna=0;coluna<colunas; coluna++) {
			//Atribui o valor de ambas as amtrizes executando a operação de soma entre elas em uma matriz diferente.
			operacao[linha][coluna] = matrizA[linha][coluna] - matrizB[linha][coluna];
			//Essa matriz mostra os resultados em tela logo após.
 			cout << " " << operacao[linha][coluna] << "    ";
 		
 		}
 		cout << endl;
}
	// Caso se qualquer outro valor for recebido:
	} else {
		
		cout << "Operacao invalida! " << endl;
		
		system ("pause");
	}
	
	/*Loop, enquanto o valor de p==true o programa continua a executar o pequeno menu 
	para obter o informação do úsuario sobre a reppetição do programa*/
	while (p==true){
	cout << "Deseja continuar? " << endl;
	cout << " 1 - Sim. " << endl;
	cout << " 2 - Nao " << endl;
	cin  >> continuar;
	
	
	if ( continuar == 1) {
			r=true;
			p=false;
	} else if (continuar == 2) {
			r=false;
			p=false;
	} else {
		cout << "Operacao invalida!" << endl; 
		system ("pause");
	}
}
}
}
