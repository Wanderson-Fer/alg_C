#include <stdio.h>
#include <locale.h>

main () {
	setlocale(LC_ALL, "Portuguese");
	
	/*
		Uma grande firma deseja saber quais os três empregados mais recentes.
		ler um número indeterminado de informações (máximo de 300) contendo o número do empregado 
		e o número de meses de trabalho deste empregado e imprimir os três mais recentes.
		Observações: A última informação contém os dois números iguais a zero.
		Não existem dois empregados admitidos no mesmo mês.
	*/
	
	int numero[300], meses_trab[300], mais_rec[3][2], i=0;
	
	printf("Informe a quantidade de meses em serviço desde a admição:\n[Para finalizar digite um numero negativo]\n==> ");
	scanf("%d", &meses_trab[i]);
	
	while (meses_trab[i]>=0) {
		printf("Digite o numero do funcionário correspondente: ");
		scanf("%d", &numero[i]);
		
		for (int j = 0; j < i; j++) {
			if (meses_trab[i] < mais_rec[1][1]) {
				
			}
		}
		
		i++; //próximo
		
		printf("\n============================================================\n");
		printf("Informe a quantidade de meses em serviço desde a admição:\n[Para finalizar digite um numero negativo]\n==> ");
		scanf("%d", &meses_trab[i]);
	}
	
	
}