#include <iostream>

using namespace std;

int main(){
	int idade;
	
	cout << "Digite sua idade: ";
	cin >> idade;
	
	if(idade >= 18){ 
		cout << "Voce eh maior de idade" << endl;
	} else if(idade >= 16) {
		cout << "Voce eh tem entre 16 e 17 anos" << endl;
	} else {
		cout << "Voce eh menor de 16 anos" << endl;
	}
	
	return 0;
}
