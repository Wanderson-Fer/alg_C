#include <stdio.h>
#include <locale.h>

main () {
	setlocale(LC_ALL, "Portuguese");
	
	//armazene em um vetor todos os números múltiplos de 5, no intervalo fechado de 1 a 500. Após isso, imprimir todos os valores armazenados
	
	int numbers[100], j=0;
	
	for (int i = 1; i <= 500; i++) {
		
		if (i%5 == 0) {
			numbers[j] = i;
			j++;
		}
	}
	
	printf("Multiplos de 5 entre 1 e 500 ==> \n");
	
	for (int i = 0; i <=99; i++) {
		printf("%d ,", numbers[i]);
	}
}