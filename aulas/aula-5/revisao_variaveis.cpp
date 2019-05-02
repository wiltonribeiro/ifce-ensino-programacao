#include <iostream>

using namespace std;

int main(){
	int idade = 18;
	float dinheiro = 45.8;
	double numero = 478544.48;
	char c = 'a';
	bool amor = true;
	string nome = "Joazim";
	int op;
	
	// Operações com números inteiros
	cout << "OPERACOES" << endl;
	op = idade + 5;
	cout << "Idade mais 5: " << op << endl;
	op = idade - 3;
	cout << "Idade menos 3: " << op << endl;
	op = idade * 2;
	cout << "Dobro da idade: " << op << endl;
	op = idade / 2;
	cout << "Metade da idade: " << op << endl;	

	// Alterando a precisão de saída do cout
	cout.precision(20);
	cout << "TIPOS DE VARIAVEIS" << endl;	
	cout << "Idade: " << idade << endl;
	cout << "Dinheiro: " << dinheiro << endl;
	printf("Numero (double) pf: %lf\n", numero);
	cout << "Numero (double): " << numero << endl;
	cout << "Caractere: " << c << endl;
	cout << "Nome: " << nome << endl;
	cout << "Amor eh: " << amor << endl;
		
	return 0;
}
