#include <stdio.h>
#include <locale.h>

main () {
	setlocale(LC_ALL,"Portuguese");
	//Criar um algoritmo que imprima a média aritmética dos números 5, 9 e 7
	
	float media; //criando variável responsável pelo armazenamento do processo
	media = (5 + 9 + 7)/3; //processamento: calculando a média de 5, 9 e 7
	
	printf("A média entre 5, 9 e 7 é: %.2f", media); //Saída: exibindo a média
}