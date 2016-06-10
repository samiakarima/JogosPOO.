//Incluindo Biblioteca "iostream".
#include <iostream> 
//Incluindo a Biblioteca "<string>", a qual possibilita a ultilização de strings, as quais ultilizaremos para receber os nomes dos jogadores.
#include <string>
//Incluido a Biblioteca "<ctime>", a qual possibilita a ultiliazão de comandos que nos possibilitam a manipular informações sobre questão de tempo.
#include <ctime>
using namespace std;

//Trás a função imprimir_espacos a tona, a qual é declarada no final do código.
void imprimir_espacos(int total1);

//Função principal, aquela que compilará o programa.
int main()
{
  //Declarando variáveis.
  bool sair = false;  
  string jog1, jog2;
  //Variável que definirá o total de espaços iniciais em cada carrinho.
  int espacos1 = 0, espacos2 = 0;
	
	//Solicita o nome dos jogadores utilizando o “cout” equivalente ao “printf”, e o recebe utilizando “cin”, equivalente ao “scanf” da linguagem C.
	cout << "Digite o nome do primeiro jogador" << endl;
	cin>> jog1;
        //Mesma coisa para o segundo jogador.
	cout << "Digite o nome do jogador 2:" << endl;
	cin >> jog2;

	//Utilizando laço de repetição while para
	while (sair == false)
	{
		// Variável que definirá o total de espaços para a pista onde os carros corerrão.
		int totaldeespacos = 80;

		//Implanta uma semente no gerador de números.
		srand((int)time(0));

		//Gerando valor aleatório de espaços entre um e três para o jogador um. 
		totaldeespacos = rand() % 3 + 1;
  
                //Cálculo para definir o valor atual de espaços para o jogador um.
		espacos1 = espacos1 + totaldeespacos;

	         //Gerando valor aleatório de espaços entre um e três para o jogador dois. 
		totaldeespacos = rand() % 3 + 1;

		//Cálculo para definir o valor atual de espaços para o jogador um.
		espacos2 = espacos2 + totaldeespacos;

	        //Imprimindo em tela.
  	        cout << "Carrinho" << endl;

		cout << "ÍNICIO:                                                               CHEGADA:" << endl;

		// Imprimindo o nome do primeiro jogador em tela.
		cout << "Jogador 1:" << jog1 << endl;
		//Ultiliza valor aléatorio gerado pela "semente" que se localiza em "espacos1". 
		imprimir_espacos(espacos1);
		//Imprimindo em tela teto do carro.
		cout << "  _  " << endl;
		//Ultiliza novamente valor aléatorio gerado pela "semente" que se localiza em "espacos1".
		imprimir_espacos(espacos1);
		//Imprimindo em tela resto do carro.
		cout << "-o-o>" << endl;
		//Imprimindo a pista em tela.
		cout << "_______________________________________________" << endl;

                //Mesma coisa para o segundo jogador.
		// Imprime nome do segundo jogador em tela.
		cout << "Jogador 2:" << jog2 << endl;
		//Ultiliza valor aléatorio gerado pela "semente" que se localiza em "espacos2". 
		imprimir_espacos(espacos2);
		//Imprimindo em tela teto do carro.
		cout << "  _  " << endl;
		//Ultiliza novamente valor aléatorio gerado pela "semente" que se localiza em "espacos2".
		imprimir_espacos(espacos2);
		//Imprimindo em tela resto do carro.
		cout << "-o-o>" << endl;
		//Imprimindo a pista em tela.
		cout << "_______________________________________________" << endl;

		//Limpa a tela e atualiza a cada rodada jogada.
		system("cls");

		//Condição para parar o laço.
		if (total1 >= 80 || total2 >= 80)
		{
			//Altera a variavel boleana.
			sair = true;

		}

                //Caso continue, a tela será limpa.
		else system("cls");


	}

	//Se o primeiro jogador ganhar...
	if (total1 >= 80) cout << jog1 << "PARABÉNS PELA VITÓRIA!!!" << endl;

	//Se o segundo jogador ganhar...
	else if (total2 >= 80) cout << jog2 << "PARABÉNS PELA VITÓRIA!!!" << endl;

	//Se ocorrer empate.
	else cout << "Nâo há vencedor :(" << endl;

	return 0;

}


//Criando nosso "super poder", a função "imprimir_espacos".
void imprimir_espacos(int espacos1)
{

	for (int qntd_espacos = 0; qntd_espacos < total; qntd_espacos++)	{
		//Espaço que será impresso dependendo do número aléatorio.
		cout << " ";


	}

}

