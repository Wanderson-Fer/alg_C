#include <stdio.h>
#include <locale.h>

main () {
	setlocale(LC_ALL, "Portuguese");
	
	/*
		Escreva um algoritmo que leia um conjunto de 50 fichas correspondente à alunos 
		e armazene-as em vetores, cada uma contendo, a altura 
		e o código do sexo de uma pessoa (código = 1 se for masculino e 2 se for feminino), e  calcule e imprima:
		- A maior e a menor altura da turma;
		- As mulheres com altura acima da média da altura das mulheres
		- As pessoas com altura abaixo da média da turma
	*/
	
	float altura[50], maior_alt=0, menor_alt=100, media_fem, sum_fem=0, media_total, sum_total=0;
	int cod_genero[50], qnt_fem=0;
	
	for (int i = 0; i < 5; i++) {
		printf("Digite a sua altura: ");
		scanf("%f", &altura[i]);
		printf("Digite o codigo do genero: \n[1] masculino\n[2] feminino\n ==>");
		scanf("%d", &cod_genero[i]);
		
		if (altura[i] > maior_alt) {
			maior_alt = altura[i];
		}
		if (altura[i] < menor_alt) {
			menor_alt = altura[i];
		}
		if (cod_genero[i] == 2) {
			sum_fem += altura[i];
			qnt_fem++;
		}
		
		sum_total += altura[i];
	}
	
	media_fem = sum_fem / qnt_fem;
	media_total = sum_total / 50;
	
	printf("\nA maior altura é %.2f", maior_alt);
	printf("\nA menor altura é %.2f", menor_alt);
	
	for (int i = 0; i < 5; i++) {
		
		if (cod_genero[i]==2 && altura[i] > media_fem) {
			printf("\nA %d° aluna tem altura acima da media feminina [altura: %.2f]", i+1, altura[i]);
		}
		if (altura[i] < media_total) {
			printf("\nO(a) %d° aluno(a) tem altura abaixo da media total dos avaliados [altura: %.2f]", i+1, altura[i]);
		}
		
	}
}