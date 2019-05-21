// Resposta do Exercício Sugerido na Aula Passada
#include <iostream>

using namespace std;

int main(){
	int num, div, result;
	cin >> num;
	
	div = num / 2;
	result = 2 * div;
	  
	if((num - result) == 0){
		cout << "Numero par" << endl;
	} else {
		cout << "Numero impar" << endl;
	}
	
	return 0;
}
