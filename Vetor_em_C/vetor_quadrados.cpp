#include <stdio.h>
#include <locale.h>

main () {
	setlocale(LC_ALL, "Portuguese");
	
	//receba dez números do usuário e armazene em um vetor o quadrado de cada número. Após isso, imprimir todos os valores armazenados. 
	
	int numbers[10], resposta;
	
	for (int i = 0; i < 10; i++) {
		printf("Digite o %i° número: ", i+1);
		scanf("%d", &resposta);
		
		numbers[i] = resposta*resposta;
	}
	
	
	for (int i = 0; i < 10; i++) {
		printf("%d ,", numbers[i]);
	}
}