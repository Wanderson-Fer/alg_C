#include <stdio.h>

main () {
	// Ler 200 números inteiros e imprimir quantos são pares e quantos são impares
	
	int number, qnt_pares=0, qnt_impares=0; // Criando variáveis para armazenar o valor digitado, a quantidade de pares e a quantidade de impares
	for (int i = 1; i<=200; i++) {
		printf("Digite o %d valor: ", i); //solicitando o valor ao usuario para leitura
		scanf("%d", &number); //armazenando o valor corrente na variável 'number'
		
		if (number%2==0) { //testando o 'number' para saber se é par
			qnt_pares++; //incrementando 'um' ao contador de numeros pares
		} else { //Não sendo par deduzindo que ele é impar
			qnt_impares++; //incrementando 'um' ao contador de numeros impares
		}
	}
	
	printf("\nForam digitados %d pares e %d impares", qnt_pares, qnt_impares); //Saída com a quantidade de pares e impares
}