#include <stdio.h>
#include <locale.h>
#include <math.h>

main () {
	setlocale(LC_ALL, "Portuguese");
	
	/*
		Criar um algoritmo que deixe entrar com dois números 
		e imprimir o cubo do menor número 
		e a raiz quadrada do maior numero, se for possível.
	*/
	
	int first_number, second_number, maior, menor;
	
	printf("Digite o primeiro número: ");
	scanf("%d", &first_number);
	printf("Digite o segundo número: ");
	scanf("%d", &second_number);
	
	if (first_number < second_number) {
		menor = first_number;
		maior = second_number;
	} else {
		menor = second_number;
		maior = first_number;
		
	}
	
	printf("O cubo do menor numero é %.0f\n", pow(menor, 3)); //Calcula o cubo
		
	if(maior < 0 ) {
		printf("Não há raiz para %d", maior);
	} else {
		printf("A raiz de %d é %.2f", maior, sqrt(maior));
	}
}