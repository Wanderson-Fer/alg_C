#include <stdio.h>
#include <locale.h>

main () {
	setlocale(LC_ALL, "Portuguese");
	
	//armazene em um vetor todos os números 'pares' do intervalo fechado de 1 a 100. Após isso, imprimir todos os valores armazenados. 
	
	int numbers[50], j=0;
	
	for (int i = 1; i<=100; i++) {
		if (i % 2 == 0) {
			numbers[j] = i;
			j++;
		}
	}
	
	for (int i = 0; i <= 49; i++) {
		printf("%d ,", numbers[i]);
	}
	
}