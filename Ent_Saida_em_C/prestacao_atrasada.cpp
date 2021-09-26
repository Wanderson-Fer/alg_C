#include <stdio.h>
#include <locale.h>

main () {
	setlocale(LC_ALL, "Portuguese");
	
	//Efetuar o calculo do valor de uma prestação em atraso, utilizando a formula: prestacao = valor + (valor * (taxa/100) * tempo)
	
	float valor, taxa, tempo, prestacao;
	
	printf("Digite o valor do débito: ");
	scanf("%f", &valor);
	printf("Digite o valor da taxa de juros: ");
	scanf("%f", &taxa);
	printf("Quantos dias se passaram desde o vencimento: ");
	scanf("%f", &tempo);
	
	prestacao = valor + (valor * (taxa/100) * tempo);
	
	printf("O valor da prestação em atraso é: %.2f", prestacao);
}