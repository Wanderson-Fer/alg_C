#include <stdio.h>
#include <locale.h>

main () {
	setlocale(LC_ALL, "Portuguese");
	
	//receba dez números do usuário e armazene em um vetor a metade de cada número. Após isso, imprimir todos os valores armazenados
	
	float numbers[10], resposta;
	
	for (int i = 0; i < 10; i++) {
		printf("Digite o %i° número: ", i+1);
		scanf("%f", &resposta);
		
		numbers[i] = resposta / 2;
	}
	
	for (int i = 0; i < 10; i++) {
		printf("%.2f ,", numbers[i]);
	}
}