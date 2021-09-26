#include <stdio.h>
#include <locale.h>

main () {
	setlocale(LC_ALL, "Portuguese");
	//Criar um algoritmo que imprima o produto dos números 20 e 40
	
	printf("O produto de 20 e 40 é: %d", 20*40);
}