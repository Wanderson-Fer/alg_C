#include <stdio.h>
#include <locale.h>

main () {
	setlocale(LC_ALL, "Portuguese");
	
	//Entrar com dois números e imprimi-los em ordem decrescente
	
	int firstNumber, secondNumber;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &firstNumber);
	printf("Digite o segundo valor: ");
	scanf("%d", &secondNumber);
	
	printf("Em ordem crescente: ");
	
	if (firstNumber < secondNumber) {
		printf("%d, %d", firstNumber, secondNumber);
	}else if (firstNumber > secondNumber) {
		printf("%d, %d", secondNumber, firstNumber);
	} else {
		printf("pera... são iguais -_-");
	}
}