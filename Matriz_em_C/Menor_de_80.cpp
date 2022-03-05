#include <stdio.h>

main () {
	// leia um vetor de 80 elementos inteiros. Encontre e mostre o menor elemento e sua posição no vetor.
	
	int numbers[80], menor, pos = 0;
	
	for (int i = 0; i<80; i++) {
		printf("Digite o %d elemento: ");
		scanf("%d", numbers[i]);
	}
	menor = numbers[pos];
	
	for (int i = 1; i<80; i++) {
		if (numbers[1]<menor) {
			menor = numbers[i];
			pos = i;
		}
	}
}