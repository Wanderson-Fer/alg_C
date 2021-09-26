#include <stdio.h>
#include <locale.h>

main () {
	setlocale(LC_ALL, "Portuguese");
	
	//Ler um número real e imprimir a quinta parte deste número.
	
	float number;
	
	printf("Digite um número real: ");
	scanf("%f", &number);
	
	printf("Sua quinta parte é %.2f", number/5);
}