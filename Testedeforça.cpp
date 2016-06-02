#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main(int argc, char* args[])
{
	string jog1;
	string jog2;
	bool sair = false;
	int ataque1 = 4;
	int defesa1 = 2;
	int ataque2 = 4;
	int defesa2 = 2;
	int vida1 = 20;
	int vida2 = 20;
	int dado1;
	 int dado1;
  	int dano1;
  	int save1;
  	int dado2;
  	int dano2;
  	int save2;

	cout << "Digite o nome do jogador 1: " << endl;
	cin >> jog1;
	cout << "Digite o nome do jogador 2: " << endl;
	cin >> jog2;

	while ( sair == false) {
 	
 	cout << " o                  o" << endl;
    	cout << ".T./              \\.T." << endl;
	cout << " ^                  ^" << endl;
	cout << jog1 << "             " << jog2 << endl;
	cout << "Vida:" << vida1 << "         " << "Vida:" << vida2 << endl; }

  
	 //Para o primeiro jogador. 
	srand((int)time(0));
	dado1 = rand() % 6 + 1;
	save1 = dado1;
	
	if (save1 >= 4) {
	  dano1 = ataque2 - defesa1;
	  vida = vida1 - dano1; 
	}

	//Mesma coisa para o jogador 2
	srand((int)time(0));
	dado2 = rand() % 6 + 1;
	save2 = dado2;
	
	if (save2 >= 4) {
	dano2 = ataque1 - defesa2;
	vida = vida2 - dano2;
	}
	
	if (save1 && save2 >= 4){
	cout << "Acertou!!" << "           " << "Dano:-" << dano1 << endl;
	} 
	else cout << "Errou!!" << endl;

	cout << "Ataque:" << ataque1 << "         " << "Ataque:" << ataque2 << endl;
  	cout << "Defesa:" << defesa1 << "         " << "Defesa:" << defesa2 << endl;
	cout << "Vida:" << vida1 << "           " << "Vida:" << vida2 << endl;
	
	
	system ("Pause");
	if (vida1 <= 0 || vida2 <= 0){
		sair = true;
	
		
	}	else system("cls");
		
		if (vida1 && vida2 < 0) { 
		cout << "Os dois perderam!" << endl;
	}
	
	return 0;
}
