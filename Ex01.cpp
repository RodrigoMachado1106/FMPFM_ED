#include <iostream>

using namespace std;

int main() {
	
	float peso, altura, imc;
	
	
	cout << "Digite o seu peso: ";
	cin  >> peso;
	
	cout << "Digite sua altura: ";
	cin  >> altura;
	
	imc = peso / (altura * altura);
	
	if (imc < 20) {
		cout << "Abaixo do peso!";
	} else if (imc >= 25){
		cout << "Acima do peso!";
	} else {
		cout << "Peso ideal!";
	}
	
	
}


