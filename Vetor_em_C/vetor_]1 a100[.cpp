#include <stdio.h>
#include <locale.h>

main () {
	setlocale(LC_ALL, "Portuguese");
	
	//armazene em um vetor todos os números inteiros do intervalo fechado de 1 a 100. Após isso, imprimir todos os valores armazenados
	
	int numbers[98];
	
	for(int i = 0; i<97; i++) {
		numbers[i] = i + 2;
	}
	for(int i = 0; i<97; i++) {
		printf("%d ,", numbers[i]);
	}
}