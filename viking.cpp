// Tema 5 - Jogo Ataque Viking
#include <iostream>
#include <string>
using namespace std;

//Identificador das funções (Super Poderes)
void tela_inicial ();
void mostrar_personagem();
void mostrar_menu();
void distribuir_atributos(char papel); //Isso ao lado da função, são os chamados parametros da função, os quais enviam uma informação para função.
void tela_treinamento();
void tela_atributos();
int pegar_vida();
string pegar_estado(int vida);

//Variáveis globais, todos os códigos, incluindo os da função enxergam elas, com elas todos eles entram em "escopo", pois todos enxergam a existencia delas.

int ataque, defesa, vida;
string estado = "INICIANTE";
int pontos_extras = 0;



/*
*	Jogo de RPG onde construímos um personagem Viking.
*
*	Diversas telas.
*	Menus.
*	Animações.
*	
*/
int main()
{
	// ----- MOSTRA A TELA INICIAL ----- 
	tela_inicial();
	

	// ----- MOSTRA A TELA DE CRIAÇÃO DE PERSONANGES ----- 
	cout << "Criando personagem.." << endl << endl;

	string jogador;
	cout << "Qual seu nome?" << endl;
	cin >> jogador;

	char papel;
	cout << endl;
	cout << "Qual sua profissao?" << endl;
	cout << "[G] Guerreiro" << endl;
	cout << "[M] Mago" << endl;
	cout << "[L] Ladino" << endl;
	cin >> papel;

/*
	Estrutura: 
	switch(escolha){
	 case[caso] : [então]	
	 	break; [finalize]
	 	
	 	Para "ou" ultilize mais de uma "case".
	 	
	 	Para evitar o efeito cascata ultilizasse o "break";
	 	O switch só testa nos casos de variaveis char e int.
	 	O "default" é para qualquer outro caso, e sempre é o ultimo a ser ultilizado. O "break" após dele é opcional. 
	O código foi enviado para mais uma função, e o código se encontra abaixo da função main.
}
	
*/
	distribuir_atributos(papel);
	//Podemos enviar informações para nossas funções, aqui isso se representa com a variavel papel.
	


	// ----- INICIA O LOOP PRINCIPAL DO JOGO ----- 
	bool sair = false;
	while (!sair)
	{
		// ----- MOSTRA O PERSONAGEM EM TELA ----- 
		mostrar_personagem();
		
		// ----- MOSTRA O MENU DE OPÇÕES PARA AÇÔES DO JOGADOR ----- 
		int opcao;
		mostrar_menu();
		cin >> opcao;
	
		switch (opcao)
		{
			case 1:
				tela_treinamento();
				break;
				
			case 2:
				tela_atributos();
				break;
	
			case 0:
				sair=true;
				break;
			
			default:
				cout << "Opcao invalida" << endl;
				break;
		


		}
	

		// Limpa a tela para a próxima jogada
		system("cls");
	}

	return 0;
}
	
void tela_inicial() {

	cout << "	       _ _    _" << endl;
	cout << "	      (_) |  (_)" << endl;
	cout << "	__   ___| | ___ _ __   __ _ " << endl;
	cout << "	\\ \\ / / | |/ / | '_ \\ / _` |" << endl;
	cout << "	 \\ V /| |   <| | | | | (_| |" << endl;
	cout << "	  \\_/ |_|_|\\_\\_|_| |_|\\__, |" << endl;
	cout << "	                       __/ |" << endl;
	cout << "	                      |___/ " << endl;
	cout << endl;
	cout << "		Aventura no Mar" << endl;
	cout << "			por marcelomesmo" << endl << endl;
	// Limpa a tela e inicia o jogo.
	system("pause");
	system("cls");
}
void mostrar_personagem(){
		
		
		cout << "	           ," << endl;
		cout << "	       ,   |\\ ,__" << endl;
		cout << "	       |\\   \\/   `." << endl;
		cout << "	       \\ `-.:.     `\\		Ataque: " << ataque << endl;
		cout << "	        `-.__ `\\=====|		Defesa: " << defesa << endl;
		cout << "	           /=`'/   ^_\\" << endl;
		cout << "	         .'   /\\   .=)		Vida: " << vida << endl;
		cout << "	      .-'  .'|  '-(/_|		" << estado << endl;
		cout << "	    .'  __(  \\  .'`" << endl;
		cout << "	   /_.'`  `.  |`" << endl;
		cout << "	            \\ |" << endl;
		cout << "	             |/" << endl << endl;
		cout << endl;
}

void mostrar_menu(){
		cout << "O que fazer?" << endl;
		cout << "1- Praticar" << endl;
		cout << "2- Aumentar Atributos" << endl;
		cout << endl;
		cout << "0- Sair" << endl;
}
void distribuir_atributos(char papel){
		switch(papel){
		case 'G':
		case 'g':
			ataque = 2;
			defesa = 3;
			vida = 10;
				break;
			
		case 'M' :
		case 'm' :
			ataque = 3;
			defesa = 2;
			vida = 10;
				break;
			
		case 'L' :
		case 'l' :
			ataque = 4;
			defesa = 1;
			vida = 10;
				break;
				
		default:
			cout << "Opcao invalida. Iniciando personagem fraco." << endl;
				ataque = 1;
				defesa = 1;
				vida = 10;
	}
	system("cls");
				
				
}
void tela_treinamento() {
	system("cls");

			for (int vezes = 0; vezes < 20; vezes++)
			{
				cout << "Viajando para mares distantes.." << endl;
				cout << endl;

				if (vezes % 2 == 0)
				{
					cout << "                   ~." << endl;
					cout << "            Ya...___|__..ab.     .   .  " << endl;
					cout << "             Y88b  \\88b  \\88b   (     ) " << endl;
					cout << "              Y88b  :88b  :88b   `.oo'  " << endl;
					cout << "              :888  |888  |888  ( (`-'  " << endl;
					cout << "     .---.    d88P  ;88P  ;88P   `.`.   " << endl;
					cout << "    / .-._)  d8P-\"\"\" | \"\"\"'-Y8P      `.`. " << endl;
					cout << "   ( (`._) .-.  .-. |.-.  .-.  .-.   ) )" << endl;
					cout << "    \\ `---( O )( O )( O )( O )( O )-' / " << endl;
					cout << "     `.    `-'  `-'  `-'  `-'  `-'  .'  " << endl;
					cout << "       `---------------------------'" << endl;
				}
				else
				{
					cout << "                     ~." << endl;
					cout << "              Ya...___|__..ab.     .   .  " << endl;
					cout << "               Y88b  \\88b  \\88b   (     ) " << endl;
					cout << "                Y88b  :88b  :88b   `.oo'  " << endl;
					cout << "                :888  |888  |888  ( (`-'  " << endl;
					cout << "       .---.    d88P  ;88P  ;88P   `.`.   " << endl;
					cout << "      / .-._)  d8P-\"\"\" | \"\"\"'-Y8P      `.`. " << endl;
					cout << "     ( (`._) .-.  .-. |.-.  .-.  .-.   ) )" << endl;
					cout << "      \\ `---( O )( O )( O )( O )( O )-' / " << endl;
					cout << "       `.    `-'  `-'  `-'  `-'  `-'  .'  " << endl;
					cout << "         `---------------------------'" << endl;
				}

				system("cls");
			}

			cout << endl << "Voce treinou bastante durante sua viajem." << endl << endl;
			// Aumentar os pontos extras do personagem.
			pontos_extras++;

			system("pause");
			system("cls");
}
void tela_atributos(){
	system("cls");

			cout << "Voce tem " << pontos_extras << " pontos de atributo." << endl;
			cout << endl;

			int aumentar;
			cout << "Aumentar.." << endl;
			cout << "1. Ataque" << endl;
			cout << "2. Defesa" << endl;
			cin >> aumentar;

			if (aumentar == 1)
			{
				if (pontos_extras > 0)
				{
					cout << "Aumentou ATAQUE +2" << endl;
					ataque += 2;
					//É o mesmo de se colocar "ataque = ataque+2" e é chamado de incremento.
					pontos_extras--;
					//Decremento.
				}
				else cout << "Pontos de atributos insuficientes. Pratique mais." << endl;
			}
			else if (aumentar == 2)
			{
				if (pontos_extras > 0)
				{
					cout << "Aumentou DEFESA +1 e VIDA" << endl;
					defesa++;

					vida = pegar_vida();
					estado = pegar_estado(vida);
				//A funções podem retornar valores.
				
	
					pontos_extras--;
				}
				else cout << "Pontos de atributos insuficientes. Pratique mais." << endl;
			}
			else cout << "Opcao Invalida" << endl;

			system("pause");
			system("cls");
}

	/*
		defesa++; defesa=defesa+1; e defesa+=1; são iguais, ou seja exercem o mesmo neste código.
	
	*/
	/*
		Como criar funções?
		É necessario identificar o código antes da função main, logo após identificar o local onde ela se localizará, e o código dela se encontrará após a função main, acompanhado de "void" assim como no inicio do programa.
		Com elas é mais simples de coompreender o código, além de que, quando necessario trazer uma função ao "main" não é necessario escrever o código inteiro novemente.
		Nas funções void vem do ingles vazio, pois as funções que são identificadas por ele não retornam nada.
		Porém, existem funções que retornam valores, e para isso é necessario ser declarada com os tipos de variaveis especificos, os quais a função retornará após ser executada.
	
	*/



int pegar_vida()
{
	int vida_nova = vida + (defesa * 2);
	return vida_nova;
	//Retornar o valor da variável vida_nova, a qual é apenas uma variável temporaria.
}


string pegar_estado(int vida)
{

	if( vida >= 10 && vida <= 15) return "WEAK";
	else if (vida >= 16 && vida <= 25) return "NORMAL";
	else if (vida >= 26 && vida <= 35) return "STRONG";
	else if (vida >= 36) return "SUPER STRONG";
	else return "INVALID";
}
	/*
	O switch não trabalha com itervalos de números no C++, portanto é mais simples ultilizarmos if e else.
	*/
