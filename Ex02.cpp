#include <iostream>

using namespace std;

int main() {
	
	int idade;
	
	cout << "Entre com a idade do nadador: ";
	cin  >> idade;
	
	while(idade < 5) {
		cout << "Entre com a idade do nadador: ";
	cin  >> idade;
	}
	
	if(idade >= 5 && idade <= 7) {
		cout << "Categoria Infantil A!";
	} else if(idade >= 8 && idade <= 10) {
		cout << "Categoria Infantil B!";	
	} else if(idade >= 11 && idade <= 13) {
		   cout << "Categoria Juvenil A!";	
	} else if(idade >= 14 && idade <= 17){
			cout << "Categoria Juvenil B!";
	} else {
		cout << " Categoria Sênior!";
	}

}