#include<iostream>

int main(){
	
	int parada = 0;
	
	while(parada == 0){
		std::cout << "Vc esta no laco de repeticao \n";
		std::cout << "Deseja sair ? Se sim digite 1, senao digite 0 \n";
		std::cin >> parada;
	}
	
	std::cout << "Vc saiu !";
	
}
