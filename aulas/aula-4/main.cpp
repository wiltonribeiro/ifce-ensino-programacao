#include <iostream>
#include <stdio.h>

int main() {
    
    // Tipos de variaveis e impressão de valores;
    
    // tipos de valores: int, float, double, char, string, bool
    // inteiro
    int inteiro = 15;
    std::cout << "Valor do inteiro é " << inteiro << "\n";
    
    /*
     ponto flutuante
     float pode armazenar valores de -340282346638528859811704183484516925440.0000000000000000 menor float
     até 340282346638528859811704183484516925440.0000000000000000 maior float
    */
    
    float ponto_flutuante = 1.426;
    std::cout << "Valor de ponto_flutuante é " << ponto_flutuante << "\n";
    
    /*
     double carrega valores maiores que o ponto fluante
     double pode armazenar valores de 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.0000000000000000 menor float até
     179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.0000000000000000 maior float
    */
    
    double valor_double = 8.739437;
    // cout arredonda o valor sem precisão
    std::cout << "Valor de valor_double é " << valor_double << "\n";
    // por isso estamos usamos o printf aqui da biblioteca stdio.h para imprimirmos o valor com precisão
    printf("Valor de valor_double é %lf \n", valor_double);
    
    // char
    char letra = 'A';
    std::cout << "Valor de letra é " << letra << "\n";
    
    // string
    /*
        string é um conjunto de caracteres. Especificamente um vetor de caracteres, mas não vamos entrar ao fundo
        no assunto de vetores nesse curso.
    */
    std::string frase = "Olá pessoal";
    std::cout << "Valor de frase é " << frase << "\n";
    
    //boolean
    bool valor_booleano = true;
    // O valor boleano carrega em si um inteiro 0 para false e 1 para true
    std::cout << "Valor do valor_booleano é " << valor_booleano << "\n";
    
    // É preciso dizer ao cout que a impressão do valor seja literal
    std::cout << std::boolalpha;
    std::cout << "Valor do valor_booleano é " << valor_booleano << "\n";
    
    std::cout << "------------------------- Entrada e  Saída ------------------------- \n";
    
    // declara variavel string
    std::string meu_nome;
    // faz a pergunta
    std::cout << "Qual seu nome ? \n";
    // aguarda o valor de entrada
    std::cin >> meu_nome;
    
    //declara variavel inteira
    int ano;
    // faz a pergunta em relação a idade
    std::cout << "Olá, "<< meu_nome <<". Quando você nasceu? \n";
    // aguarda o valor de entrada
    std::cin >> ano;
    
    // idade recebe a subtração do ano atual menos o ano dito pelo usuário
    int idade = 2019 - ano;
    
    // exibe em tela o valor do usuário
    std::cout << "Sua idade até o final do ano será: " << idade << "\n";
    
    std::cout << "------------------------- Algumas operações ------------------------- \n";
    
    //outras operações matemáticas
    std::cout << "Divisão de 20 por 4 é: " << 20/4 << "\n";
    std::cout << "Soma de 20 mais 4 é: " << 20+4 << "\n";
    std::cout << "Multiplicação de 20 por 4 é: " << 20*4 << "\n";
    
    
    return 0;
}
