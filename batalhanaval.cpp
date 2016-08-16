//Temas 6, Batalha Naval .-.
#include <iostream>
using namespace std;
#define LINHAS 9
#define COLUNAS 9 
/*
https://murilo.wordpress.com/2009/05/29/o-que-sao-enums-e-como-utiliza-los-melhor-em-c/
*/
enum Estado{
	AGUA, 
	BARCO,
	ERRO,
	ACERTO
};


int main(){
		//Criar o tabuleiro.
		int tabuleiro[LINHAS][COLUNAS];
	
		//Preencher o tabuleiro vazio.
		for(int lin = 0; lin < LINHAS; lin++){
			for(int col = 0; col < COLUNAS; col++){
			//0: AGUA. 1:BARCO.
			tabuleiro[lin][col]=AGUA;	
			}		
		}
		//Marcação de cima
		cout << "    1  2  3  4  5  6  7  8  9 " <<endl;
		cout << endl;
		//Adicionar os barcos.
		tabuleiro[4][3] = BARCO;
		tabuleiro[8][5] = BARCO;
		tabuleiro[5][8] = BARCO;
		
		//Mostrar o tabuleiro em tela.
		for(int lin = 0; lin < LINHAS; lin++){
			cout << " " << lin+1 << " ";
			for(int col = 0; col < COLUNAS; col++){
			if(tabuleiro[lin][col]==AGUA){
				cout << " ~ ";
			} else if(tabuleiro[lin][col]==BARCO) {
				cout << " B ";
			}
				
			}
			cout << endl;	
		
		}
		
}
