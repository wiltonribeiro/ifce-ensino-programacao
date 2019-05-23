#include <iostream>


using namespace std;

int main(){
	double N1, N2, N3, media, p1, p2, p3;
	int opcao;
	string nome;
	bool sair = false;
	do{
	cout << "Calculadora de nota 0.0.1" << endl;
	cout << "Copyright 2019 Queiroz Industries" << endl;

	cout << "1. Media Aritimetica 2. Media ponderada 3. Sair" << endl;
	cin >> opcao;
	
	if(opcao == 1){
		cout << "digite seu nome: " << endl;
		cin >> nome;
		cout << "digite a primeira nota:" << endl;
		cin >> N1;
		cout << "digite a segunda nota:" << endl;
		cin >> N2;
		cout << "digite a terceira nota:" << endl;
		cin >> N3;
		
		media = (N1+N2+N3) / 3;
		
		
		if(media >= 6){
			cout << "Parabens " << nome << " vc foi aprovado(a)" << endl;
			
			cout << media;
		}
		else{
			
		cout << "Infelizmente " << nome << " vc foi reprovado(a)" << endl;
		
		cout << media;
		
		}
	}
		if(opcao == 2){
		cout << "digite seu nome: " << endl;
		cin >> nome;
		cout << "Digite o peso da primeira nota: " << endl;
		cin >> p1;
		cout << "digite a primeira nota:" << endl;
		cin >> N1;
		cout << "Digite o peso da segunda nota: " << endl;
		cin >> p2;
		cout << "digite a segunda nota:" << endl;
		cin >> N2;
		cout << "Digite o peso da terceira nota: " << endl;
		cin >> p3;
		cout << "digite a terceira nota:" << endl;
		cin >> N3;
		
		media = (p1 * N1 + p2 * N2 + p3 * N3) / (p1 + p2 + p3);
				
			if(media >= 6){
			cout << "Parabens " << nome << " vc foi aprovado(a)" << endl;
			
			cout << media;
		}
		else{
			
		cout << "Infelizmente " << nome << " vc foi reprovado(a)" << endl;
				
				cout << media;
		}
		
	
		
	}	
	if(opcao == 3){
			
			sair = true;
		}
}	while(!sair);
	
	return 0;
}