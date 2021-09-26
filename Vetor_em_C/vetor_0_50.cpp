#include <stdio.h>
#include <locale.h>

main () {
	setlocale(LC_ALL, "Portuguese");
	
	//armazene em um vetor todos os números inteiros de 0 a 50. Após isso, imprimir todos os valores armazenados
	
	int numbers[51];
	
	for(int i = 0; i<=50; i++) {
		numbers[i] = i;
	}
	for(int i = 0; i<=50; i++) {
		printf("%i, ",numbers[i]);
	}
}