#include <stdio.h> 
#include <locale.h>

main () {
	setlocale (LC_ALL, "Portuguese");
	
	//armazene em um vetor o quadrado dos números ímpares no intervalo fechado de 1 a 20. Após isso, imprimir todos os valores armazenados
	
	int numbers[10], j=0;
	
	for (int i = 1; i<=20; i++) {
		if (i % 2 != 0) {
			numbers[j] = i*i;
			j++;
		}
	}
	
	for (int i = 0; i <= 9; i++) {
		printf("%d ,", numbers[i]);
	}
}