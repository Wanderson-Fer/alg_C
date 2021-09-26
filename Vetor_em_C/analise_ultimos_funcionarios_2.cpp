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
	
	int numero[300], meses_trab[300], id[3], i=0, permissao = 0;
	
	do {
		printf("Digite o numero do %d° funcionário: ", i+1);
		scanf("%d", &numero[i]);
		do {
			printf("Informe a quantidade de meses em serviço desde a admição do %d° funcionario:\n==> ", i+1);
			scanf("%d", &meses_trab[i]);
		} while (meses_trab[i]<0);
		
		for (int j = 0; j < i; j++) {
			if (meses_trab[i] == meses_trab[j]) {
				i--;
			}
		}
		
		if (i>2) {
			printf("Digite o número 1 para finalizar ou qualquer outro número para continuar: ");
			scanf("%d", permissao);
		}
		
		i++;
	} while (permissao != 1 && i<300);
	
}