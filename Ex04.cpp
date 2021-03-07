#include<iostream>

using namespace std;

int main () {
	
	float salarioAtual;
	float salarioReajuste  ;
	
	cout <<" Entre com o valor do salário atual: ";
	cin  >> salarioAtual;
	
	if(salarioAtual < 1000) {
		salarioReajuste = salarioAtual + (salarioAtual * 0.15);
		cout << salarioReajuste;
	}else if (salarioAtual >= 1000){
		salarioReajuste = salarioAtual + (salarioAtual * 0.10);
		cout << salarioReajuste;
	} else {
		salarioReajuste = salarioAtual + (salarioAtual * 0.05);
		cout << salarioReajuste;
	}
	
}