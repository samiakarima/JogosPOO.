//Incluindo Biblioteca "iostream".
#include <iostream>
//Incluindo a Biblioteca "<string>", a qual possibilita a ultilização de strings, as quais ultilizaremos para receber os nomes dos jogadores.
#include <string>
//Incluido a Biblioteca "<ctime>", a qual possibilita a ultiliazão de comandos que nos possibilitam a manipular informações sobre questão de tempo.
#include <ctime>
using namespace std;

//Função principal, aquela que compilará o programa.
int main(int argc, char* args[])
{
	//Declarando Variáveis.
	string jog1, jog2;
	bool sair = false;
	int ataque1 = 4, defesa1 = 2;
	int ataque2 = 4, defesa2 = 2;
	int vida1 = 20, vida2 = 20;
	//A primeira variável salvará numero aleatório, a segunda, o resultado equivalente ao dano, para mostrar em tela.
	int dado1, dano1;
  	//Esta variável será ultilizada para guardarmos o valor salvo na variável "dado1", que logo após isso será alterada.
  	int save1;
  	//A primeira variável salvará numero aleatório, a segunda, o resultado equivalente ao dano, para mostrar em tela.
  	int dado2, dano2;
  	//Esta variável será ultilizada para guardarmos o valor salvo na variável "dado2", que logo após isso será alterada.
  	int save2;

	//Pargunta qual o nome do jogador um, escrevendo em tela e ultilizando o "cout" para isso, após isso o endl para quebra de linha.
	cout << "Digite o nome do jogador 1: " << endl;
	//Recebe o valor e o salva na variável "jog1".
	cin >> jog1;
	//Pargunta qual o nome do jogador dois, escrevendo em tela e ultilizando o "cout" para isso, após isso o endl para quebra de linha.
	cout << "Digite o nome do jogador 2: " << endl;
	//Recebe o valor e o salva na variável "jog2".
	cin >> jog2;

	//Loop para continuar executar o programa.
	while ( sair == false) {
 	
 	cout << " o                  o" << endl;
    	cout << ".T./              \\.T." << endl;
	cout << " ^                  ^" << endl;
	cout << jog1 << "             " << jog2 << endl;
	cout << "Vida:" << vida1 << "         " << "Vida:" << vida2 << endl; }

  
	//Para o primeiro jogador. 
	//Implanta uma semente no gerador de números.
	srand((int)time(0));
	//Gera um número aleatório de um a seis.
	dado1 = rand() % 6 + 1;
	//Salva o valor contido em "dado1".
	save1 = dado1;
	
	//Se o valor aleatorio for maior que quatro, executamos o seguinte:
	if (save1 >= 4) {
	 //Cálculo para encontrar o dano que o jogador 1 fará no 2.
	  dano1 = ataque2 - defesa1;
	  //Cálculo para substituir o valor antigo da vida pelo valor atul, com o dano já inflingido.
	  vida = vida1 - dano1; 
	}

	//Mesma coisa para o jogador 2
	//Implanta uma semente no gerador de números.
	srand((int)time(0));
	//Gera um número aleatório de um a seis.
	dado2 = rand() % 6 + 1;
	//Salva o valor contido em "dado2".
	save2 = dado2;
	
	//Se o valor aleatorio for maior que quatro, executamos o seguinte:
	if (save2 >= 4) {
	//Cálculo para encontrar o dano que o jogador 2 fará no 1.
	dano2 = ataque1 - defesa2;
	 //Cálculo para substituir o valor antigo da vida pelo valor atul, com o dano já inflingido.
	vida = vida2 - dano2;
	}
	//Se o resultado do dano for maior que quatro, o jogador acertará, ativando o seguinte.
	if (save1 && save2 >= 4){
	cout << "Acertou!!" << "           " << "Dano:-" << dano1 << endl;
	} 
	else cout << "Errou!!" << endl;

	cout << "Ataque:" << ataque1 << "         " << "Ataque:" << ataque2 << endl;
  	cout << "Defesa:" << defesa1 << "         " << "Defesa:" << defesa2 << endl;
	cout << "Vida:" << vida1 << "           " << "Vida:" << vida2 << endl;
	
	//Dá continuidade ao loop, sem que o programa feche.
	system ("Pause");
	//Caso a vida de um dos jogadores for igual ou menor que zero, o jogo terminará.
	if (vida1 <= 0 || vida2 <= 0){
		sair = true;
	
		
	}	if (vida1>0 && vida2<=0){
		cout << "O jogador um ganhou!" << endl;
	}
	
		if (vida1<=0 && vida2>0){
		cout << "O jogador dois ganhou!" << endl;
		}
		//Caso for maior que zero, dará continuidade ao loop e limpará a tela.
		else system("cls");
		
		//Caso se ambos chegarem a zero ao mesmo tempo.
		if (vida1 && vida2 < 0) { 
		cout << "Os dois perderam!" << endl;
	}
	
	return 0;
}
