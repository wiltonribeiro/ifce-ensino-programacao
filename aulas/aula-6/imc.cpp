
#include<iostream>

int main(){
	
	double peso, altura, imc;
	int parada = 0;
	
	while(parada == 0){
		std::cout << "--------------------------------\n";
		std::cout << "Bem vindo ao programa de IMC \n";
		std::cout << "0 - Calculo de imc\n";
		std::cout << "Outro numero - Sair\n";
		std::cin >> parada;
		
		if(parada == 0){
			std::cout << "Qual o seu peso? \n";
			std::cin >> peso;
			std::cout << "Qual a sua altura? \n";
			std::cin >> altura;
			
			imc = peso/(altura * altura);
			
			std::cout << "Seu imc eh " << imc << "\n";
			
			if(imc < 18.6){
				std::cout << "Abaixo do peso \n";
			} else if(imc < 24.9){
				std::cout << "Peso ideal \n";
			} else {
				std::cout << "Acima do peso \n";
			}
		}
		
	}
	
}