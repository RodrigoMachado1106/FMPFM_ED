#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << fixed << setprecision(2);
	
	
	float PE; // PE = Pre�o de etiqueta.
	float PF; // PF = Pre�o final.
	char CP; // CP = Condi��o de Pagamento.
	
	cout << "Etre com o pre�o da etiqueta: ";
	cin  >> PE;
	
	cout << "Entre com a condi��o de pagamento: ";
	cin >> CP;
	
	switch(CP) {
		case '1':
			PF = PE - (PE * 0.10);
			cout << "� vista em dinheiro ou cheque, com 10% de desconto!" << endl;
			cout << "Valor final = " << "R$" << PF;
			break;
		case '2':
			PF = PE - (PE * 0.05);
			cout << "� vista com cart�o de cr�dito, com 5% de desconto!" << endl;
			cout << "Valor final = " << "R$" << PF;
			break;
		case '3':
			cout <<	"Em 2 vezes, pre�o normal da etiqueda sem juros!" << endl;
			cout << "Valor final = " << "R$" << PE;
			break;
		case '4':
			PF = PE + (PE * 0.10);
			cout << "Em 3 vezes, pre�o de etiqueta com acr�scimo de 10%" << endl;
			cout <<"R$" << PF;
	}
	
	
	
	
	
	
	
	
	
}