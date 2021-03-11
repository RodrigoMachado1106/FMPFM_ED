#include <iostream>

using namespace std;

int main() {
	
	int numero = 1;
	
	while(numero < 500){
		numero++;
		if(numero % 5 == 0){
			cout << numero << endl;
		}	
	}
}