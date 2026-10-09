#include <iostream>
#include <string>


using namespace std;


/*Medidas Metricas
 * milimetro 1m = 1000mm
 * centimetro 1m = 100cm
 * decimetro 1m = 10dm
 * metro 1m = 1m
 * decametro 1m = 0,1Dm
 * hectometro 1m = 0,01ha
 * quilometro 1m = 0,001km
 * usar metro(M) PADRAO 1M
 */
double conversor(){
	double valor, resultado, valorfinal;
	char origem, destino;
	cout<<"Conversor\n[]-comprimento (m, c, d, M, D, h, k)\n";
	cout<<"Digite o valor a converter\n";
	cin>>valor;
	cout<<"Origem: "; cin>>origem;
	
	switch(origem){
		case 'm':
			resultado = valor / 1000;
			break;
		case 'c':
			resultado = valor / 100;
			break;
		case 'd':
			resultado = valor / 10;
			break;
		case 'M':
			resultado = valor;
			break;
		case 'D':
			resultado = valor * 10;
			break;
		case 'h' :
			resultado = valor * 100;
			break;
		case 'k' :
			resultado = valor * 1000;
			break;
	}
	cout<<"Destino: ";cin>>destino;
	switch (destino){
		case 'm' :
			valorfinal = resultado * 1000;
			break;
		case 'c':
			valorfinal = resultado * 100;
			break;
		case 'd' :
			valorfinal = resultado * 10;
			break;
		case 'M':
			valorfinal = resultado;
			break;
		case 'D' :
			valorfinal = resultado / 10;
			break;
		case 'h' :
			valorfinal = resultado / 100;
			break;
		case 'k' :
			valorfinal = resultado / 1000;
			break;
	
	
	}
	return valorfinal;
}

		

int main(){

	double resultado;
	 resultado = conversor();
	cout<<resultado<<endl;

}


