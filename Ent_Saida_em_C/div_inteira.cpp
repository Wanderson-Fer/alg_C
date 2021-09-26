#include <stdio.h>
#include <locale.h>

main () {
	setlocale(LC_ALL, "Portuguese");
	
	//Entrar com dois números inteiros e imprimir a seguinte saída: 'Dividendo', 'Divisor', 'Quociente', 'Resto'
	
	int dividendo, divisor, quociente, resto;
	
	printf("Digite o dividendo: ");
	scanf("%d", &dividendo);
	printf("Digite o divisor: ");
	scanf("%d", &divisor);
	
	quociente = dividendo / divisor;
	resto = dividendo % divisor;
	
	printf("Dividendo:...%d\nDivisor:.....%d\nQuociente:...%d\nResto:.......%d", dividendo, divisor, quociente, resto);
}