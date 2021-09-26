#include <stdio.h>
#include <locale.h>

main () {
	setlocale(LC_ALL, "portuguese");
	
	//Ler um número e se ele for maior do que 20, então imprimir a metade do número senão imprimir a quinta parte do valor
	
	float number;

	printf("Insira um número: ");
	scanf("%f", &number);
	
	if (number>20) {
		printf("A metade do valor inserido é %.2f", number/2);
	} else {
		printf("A quinta parte do valor inserido é %.2f", number/5);
	}
}