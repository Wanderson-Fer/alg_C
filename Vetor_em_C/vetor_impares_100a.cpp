#include <stdio.h>
#include <locale.h>

main () {
	setlocale(LC_ALL, "Portuguese");
	
	//armazene em um vetor os 100 primeiros números ímpares. Após isso, todos os valores armazenados.

	int numbers[100], j=0;
	
	for (int i = 1; i<=200; i++) {
		if (i % 2 != 0) {
			numbers[j] = i;
			j++;
		}
	}
	
	for (int i = 0; i <= 99; i++) {
		printf("%d ,", numbers[i]);
	}
}