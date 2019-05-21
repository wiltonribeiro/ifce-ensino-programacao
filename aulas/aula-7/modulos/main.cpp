#include <iostream>

#include "calculadora.h"

using namespace std;

int main(int argc, char** argv) {
	diz();
	cout << "SOMA: " << soma(4, 2) << endl;
	cout << "SUB: " << sub(1, 8) << endl;
	cout << "MULT: " << mult(4, 2) << endl;
	cout << "DIV: " << div(4, 2) << endl;	

	return 0;
}
