#include <stdio.h>
#include <locale.h>

main () {
	setlocale(LC_ALL,"Portuguese");
	
	//receba dez numeros do usuario e armazene em um vetor o cubo de cada numero. Apos isso,imprimir todos os valores armazenados
	
	int numbers[10], resposta;
	
	for (int i = 0; i < 10; i++) {
		printf("Digite o %i° número: ", i+1);
		scanf("%d", &resposta);
		
		numbers[i] = resposta*resposta*resposta;
	}
	
	
	for (int i = 0; i < 10; i++) {
		printf("%d ,", numbers[i]);
	}
}