#include<iostream>

using namespace std;

double mediaaritimetica(){
	double media;
	double nota1, nota2, nota3;
	
	
	cout<<"digite a nota 1:\n";
	cin>>nota1;
	cout<<"digite a nota 2:\n";
	cin>>nota2;
	cout<<"digite a nota 3:\n";
	cin>>nota3;
	media = (nota1+nota2+nota3)/3;
	return media;
}
double mediaponderada(){
	double nota1, nota2, nota3, media, p1, p2, p3;
	
	cout<<"digite a nota 1:\n";
	cin>>nota1;
	cout<<"digite o peso da nota 1:\n";
	cin>>p1;
	cout<<"digite a nota 2:\n";
	cin>>nota2;
	cout<<"digite o peso da nota 2:\n";
	cin>>p2;
	cout<<"digite a nota 3:\n";
	cin>>nota3;
	cout<<"digite o peso da nota 3:\n";
	cin>>p3;
	
	media = ((nota1*p1)+(nota2*p2)+(nota3*p3))/(p1+p2+p3);
	return media;
}
int main(){ 
	double nota1, nota2, nota3, media;
	string nome;
	int opcao=0;
	
	while(opcao!=3){
		
		cout<<"1-media aritmetica\n";
		cout<<"2-media ponderada\n";
		cout<<"3-sair\n";
		cin>>opcao;
		if(opcao == 1){
				cout<<"digite seu nome:\n";
	            cin>>nome;
				media = mediaaritimetica();
				if (media >= 7) {
					cout<< nome << " foi aprovado\n";
	
				}
				else {
					cout <<nome<< " foi reprovado\n";
	
				}
		}
		else if(opcao ==2){
			
			
			    cout<<"digite seu nome:\n";
	    		cin>>nome;
				
				media = mediaponderada();
				
				if (media >= 7) {
					cout<< nome << " foi aprovado\n";
	
				}
				else {
					cout <<nome<< " foi reprovado\n";
	
				}
		}
	} 
	

}