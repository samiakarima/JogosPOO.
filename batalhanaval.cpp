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
//Funções.
void mostrar_tabuleiro(int tabuleiro[LINHAS][COLUNAS], int tamanho);
void adicionar_barcos(int tabuleiro[LINHAS][COLUNAS], int tamanho);
int main(){
		int tamanho=5;
		//Criar o tabuleiro.
		int tabuleiro[LINHAS][COLUNAS];
	
		//Preencher o tabuleiro vazio.
		for(int lin = 0; lin < LINHAS; lin++){
			for(int col = 0; col < COLUNAS; col++){
			//0: AGUA. 1:BARCO.
			tabuleiro[lin][col]=AGUA;
			}		
		}
	
		//Adicionar os barcos.
		adicionar_barcos(tabuleiro, tamanho);
			
	
		//Mostrar o tabuleiro em tela.
		mostrar_tabuleiro(tabuleiro, tamanho);




} 

void mostrar_tabuleiro(int tabuleiro[LINHAS][COLUNAS], int tamanho){
	cout << "    1  2  3  4  5  6  7  8  9 " <<endl;
		cout << endl;
	for(int lin = 0; lin < LINHAS; lin++){
			cout << " " << lin+1 << " ";
			for(int col = 0; col < COLUNAS; col++){
				switch(tabuleiro[lin][col])
				{
					case AGUA:
						cout << " ~ ";	
						break;	
					case BARCO:
						cout << " B ";	
						break;	
					case ERRO:
						cout << " X ";	
						break;	
					case ACERTO:
						cout << " O ";
						break;	
			}
	
			}
			cout << endl;	
		
		}
		
	
}
void adicionar_barcos(int tabuleiro[LINHAS][COLUNAS], int tamanho){
		int pos_linha, pos_coluna;
		cout << "Adicionando Barcos: "<< endl;
		cout << "Digite a linha [1 ate 9]: " << endl;
		cin  >> pos_linha;
		cout << "Digite a coluna [1 ate 9]: " << endl;
		cin  >> pos_coluna;
		
		
		if(	pos_linha>=1 &&
			pos_linha<=9 &&
			pos_coluna>=1 &&
			pos_coluna<=9 &&
			pos_coluna+tamanho<=9){
				
		
				for(int aumento = 0 ; aumento < tamanho ; aumento++){
					
					tabuleiro[pos_linha-1][pos_coluna-1+aumento] = BARCO;
		
				} 

				cout << "Adicionado com sucesso!" << endl;
		} else {
			cout << "ERRO! POSICAO INVALIDA!" << endl;
		}
			
			
}
