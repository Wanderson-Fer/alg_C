#include <stdio.h>
#include <locale.h>

main () {
	setlocale(LC_ALL, "Portuguese");
	
	/*
	Criar um algoritmo que após a entrada de três números inteiros,
	mesmo que entre desordenados ao final sejam impressos em ordem crescente.
	*/
	
	int n=5, number[n], aux;
	
	for (int i=0; i<n; i++) {
		printf("Insira o %d° número: ", i+1);
		scanf("%d", &number[i]);
	}
	
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			if( number[i]<number[j]) {
				aux = number[i];
				number[i] = number[j];
				number[j] = aux;
			}
		}
	}
		
	for (int i=0; i<n; i++) {
		printf("%d ,", number[i]);
	}
}