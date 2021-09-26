#include <stdio.h>
#include <locale.h>

main () {
	setlocale(LC_ALL, "Portuguese");
	
	/*
	Calcular a media de valores PARES e IMPARES, de 50 numeros que serao digitados pelo usuario. 
	Ao final o algoritmo deve mostrar estas duas medias. 
	O algoritmo deve mostrar tambem o maior numero PAR digitado e o menor numero IMPAR digitado. 
	Esses dados devem ser armazenados em um vetor. 
	Alem disso, devem ser impressos os valores PARES maiores que a media PAR,
	bem como os valores IMPARES menor que a media IMPAR.
	*/
	
	float med_par, med_impar;
	int num_dig[50], maior_par=0, menor_impar=0, pares[50], impares[50], sum_par=0, sum_impar=0, qnt_par=0, qnt_impar=0;
	
	for (int i = 0;i < 10; i++) {
		printf("Digite o %d° número: ", i+1);
		scanf("%d", &num_dig[i]);
		
		if (num_dig[i]%2==0 && num_dig[i]!=0) {
			
			pares[qnt_par] = num_dig[i];
			qnt_par++;
			sum_par += num_dig[i];
			
			if (maior_par==0 || maior_par<num_dig[i]) {
				maior_par = num_dig[i];
			}	
		}else if (num_dig[i] != 0) {
			
			impares[qnt_impar] = num_dig[i];
			qnt_impar++;
			sum_impar += num_dig[i];
			
			if (menor_impar==0 || menor_impar>num_dig[i]) {
				menor_impar = num_dig[i];
			}
		} else {
			printf("\n====================\nUm zero foi digitado\n====================\n");
		}
	}
	
	
	med_par = sum_par / qnt_par;
	med_impar = sum_impar / qnt_impar;
	
	printf("\n----------Pares----------\n");
	printf("O maior par digitado foi: %d", maior_par);
	printf("\nA média entre os numeros pares é: %.2f", med_par);
	printf("\nO números pares acima da média são: \n");
	
	for (int i =0; i<qnt_par; i++) {
		if (pares[i] > med_par ){
			printf("%d ,", pares[i]);
		}
	}
	
	printf("\n---------Impares---------\n");
	printf("O menor impar digitado foi: %d", menor_impar);
	printf("\nA média entre os numeros impares é: %.2f", med_impar);
	printf("\nO números impares abaixo da média são: \n");
	
	for (int i =0; i<qnt_impar; i++) {
		if (impares[i] < med_impar ){
			printf("%d ,", impares[i]);
		}
	}
}