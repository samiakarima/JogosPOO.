#include <iostream>
using namespace std;
#define PI 3.14159265
double cal_area(double raio);
double cal_perimetro(double raio);

int main(){
	double raio, area, perimetro;
	
	cout << "Digite o valor do raio: " << endl;
	cin >> raio;	
	
	area= cal_area(raio);
	
	perimetro= cal_perimetro(raio);
	
	cout << "A area e: " << area << endl;
	cout << "O perimetro e: " << perimetro << endl;
	
	
	
}
	double cal_area(double raio){
		double area;
		area=(raio*raio)*PI;
		return area;
}
	double cal_perimetro(double raio){
	
		double perimetro;
		perimetro=(2*PI)*raio;
		return perimetro;
	
}
