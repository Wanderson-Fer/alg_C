#include <stdio.h>

main() {
	//Criar um algoritmo que imprima todos os números de 1 até 100 e a soma deles.
	
	int sum = 0; // 'Criando' e 'inicializando' a variável que conterá a 'soma' de todos os numeros.
	for (int i=1; i<=100; i++) {
		printf(" ,%d", i); //escrevendo os numeros de 1 a 100
		sum += i; //acrescentando o numero a somatória até o momento
	}
	printf("\nA somatoria de todos os numeros e: %d", sum); //exibindo a somatória final
}