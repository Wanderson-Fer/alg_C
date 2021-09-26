#include <stdio.h>
#include <locale.h>

main () {
	setlocale(LC_ALL, "Portuguese");
	
	//Efetuar a leitura de dois números diferentes e identificar o maior valor
	
	int firstNumber, secondNumber;
	
	printf("Digite o primeiro número: ");
	scanf("%d", &firstNumber);
	printf("Digite o segundo número: ");
	scanf("%d", &secondNumber);
	
	if (firstNumber > secondNumber) {
		printf("O maior valor é %d", firstNumber);
	}else if (firstNumber < secondNumber) {
		printf("O maior valor é %d", secondNumber);
	} else {
		printf("O valores inseridos são iguais");
	}
}