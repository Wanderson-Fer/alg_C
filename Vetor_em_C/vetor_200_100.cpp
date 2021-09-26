#include <stdio.h>
#include <locale.h>

main () {
	setlocale(LC_ALL, "Portuguese");
	
	//armazene em um vetor todos os números inteiros de 200 a 100. Após isso, imprimir todos os valores armazenados.
	
	int numbers[100];
	
	for (int i = 100; i >= 0; i--) {
		numbers[i] = i + 100;
	}
	
	for (int i = 100; i >= 0; i--) {
		printf("%d ,", numbers[i]);
	}
}