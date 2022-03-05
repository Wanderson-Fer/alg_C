#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "Portuguese");
	
	/*Entrar com três números e imprimir o menor número (suponha números diferentes)*/
	
	int number[3], menor = 0;
	
	for (int i = 0; i<3; i++) {
		printf("Digite o %d° numero: ", i+1);
		scanf("%d", &number[i]);
	}
	
	for (int i = 0; i<3; i++) {
		if (menor>number[i] || menor == 0) {
			menor = number[i];
		}
	}
	
	printf("O menor número digitado é %d", menor);
}