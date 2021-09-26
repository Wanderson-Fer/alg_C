#include <stdio.h>
#include <locale.h>

main () {
	setlocale(LC_ALL, "Portuguese");
	
	//Entrar com um número e imprimir uma das mensagens: é múltiplo de 5 ou não é múltiplo de 5
	
	int number;
	
	printf("Insira um número: ");
	scanf("%d", &number);
	
	if (number%5==0) {
		printf("È multiplo de 5!");
	} else {
		printf("Não é multiplo de 5!");
	}
}