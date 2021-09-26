#include <stdio.h>
#include <locale.h>
#include <math.h>  //biblioteca responsavel por funcoes matematicas, nesse caso raiz quadrada

main () {
	setlocale(LC_ALL, "Portuguese");
	
	/*receba quinze numeros do usuario e armazene em um vetor a raiz quadrada de cada numero.
	Caso o valor digitado seja menor que zero o numero –1 deve ser atribuido ao elemento do vetor. 
	Apos isso, imprimir todos os valores armazenados
	*/
	
	float numbers[15], resposta;
	
	for ( int i = 0; i<=14; i++) {
		printf("Digite o %i° valor: ", i+1);
		scanf("%f", &resposta);
		
		if (resposta < 0) {
			numbers[i] = -1;
		}
		
		numbers[i] = sqrt(resposta);
	} 
	
	for ( int i = 0; i<=14; i++) {
		printf("%.2f ,", numbers[i]);
	}
}