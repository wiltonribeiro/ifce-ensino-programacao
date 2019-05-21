#include <iostream>

using namespace std;

int soma(int x, int y){
	return x + y;
}

int sub(int x, int y){
	return x - y;
}

int mult(int x, int y){
	return x * y;
}

int div(int x, int y){
	return x / y;
}

void mostra_nome(){
	cout << "Funcao(Procedimento) mostra nome" << endl;
}

int main(){
	cout << soma(4, 8) << endl;
	cout << sub(4, 8) << endl;
	cout << mult(4, 8) << endl;
	cout << div(8, 4) << endl;
	mostra_nome();
	return 0;
}
