#include <stdio.h>

main() {
	//leia um vetor inteiro de 30 posições e crie um segundo vetor, substituindo os valores 0 por 1. Mostre os 2 vetores
	
	int vet[30], vet2[30];
	
	for (int i = 0; i < 30; i++) {
		printf("Digite um valor inteiro: ");
		scanf("%d", &vet[i]);
	}
	
	for (int i = 0; i < 30; i++) {
		
		if(vet[i])
			vet2[i] = vet[i];
		else
			vet2[i] = 1;
	}
	
	printf("\nVetor 1\n");
	for (int i = 0; i < 30; i++)
		printf("%d, ", vet[i]);
	
	printf("\nVetor 2\n");
	for (int i = 0; i < 30; i++)
		printf("%d, ", vet2[i]);

}