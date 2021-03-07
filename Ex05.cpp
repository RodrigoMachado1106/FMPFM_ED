#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << fixed << setprecision(2);
	
	
	float PE; // PE = Preço de etiqueta.
	float PF; // PF = Preço final.
	char CP; // CP = Condição de Pagamento.
	
	cout << "Etre com o preço da etiqueta: ";
	cin  >> PE;
	
	cout << "Entre com a condição de pagamento: ";
	cin >> CP;
	
	switch(CP) {
		case '1':
			PF = PE - (PE * 0.10);
			cout << "À vista em dinheiro ou cheque, com 10% de desconto!" << endl;
			cout << "Valor final = " << "R$" << PF;
			break;
		case '2':
			PF = PE - (PE * 0.05);
			cout << "À vista com cartão de crédito, com 5% de desconto!" << endl;
			cout << "Valor final = " << "R$" << PF;
			break;
		case '3':
			cout <<	"Em 2 vezes, preço normal da etiqueda sem juros!" << endl;
			cout << "Valor final = " << "R$" << PE;
			break;
		case '4':
			PF = PE + (PE * 0.10);
			cout << "Em 3 vezes, preço de etiqueta com acréscimo de 10%" << endl;
			cout <<"R$" << PF;
	}
	
	
	
	
	
	
	
	
	
}