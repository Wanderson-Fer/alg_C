#include <stdio.h>
#include <locale.h>

main () {
	setlocale(LC_ALL, "Portuguese");
	
	/*
	Criar um algoritmo que após a entrada de três números inteiros,
	mesmo que entre desordenados ao final sejam impressos em ordem crescente.
	*/
	
	int number[3], aux;
	
	for (int i=0; i<3; i++) {
		printf("Insira o %d° número: ", i+1);
		scanf("%d", &number[i]);
	}
	
	for (int i=0; i<3; i++) {
		for (int j=0; j<3; j++) {
			if( number[i]<number[j]) {
				aux = number[i];
				number[i] = number[j];
				number[j] = aux;
			}
		}
	}
	
	for (int i=0; i<3; i++) {
		printf("%d ,", number[i]);
	}
}