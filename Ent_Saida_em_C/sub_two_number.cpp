#include <stdio.h>
#include <locale.h>

main () {
	setlocale(LC_ALL, "Portuguese");
	
	//Ler dois números inteiros e imprimir a subtração.
	
	int firstNumber, secondNumber, sub;
	
	printf("Insira o primeiro número: ");
	scanf("%d", &firstNumber);
	printf("Insira o segundo número: ");
	scanf("%d", &secondNumber);
	
	sub = firstNumber - secondNumber;
	
	printf("O resultado da subtração é %d", sub);
}