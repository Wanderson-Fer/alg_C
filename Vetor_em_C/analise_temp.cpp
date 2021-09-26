#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "Portuguese");
	
	/*
		Em uma cidade do interior, sabe-se que, de janeiro a abril de 1976 (121 dias),
		nao ocorreu temperatura inferior a 15oC nem superior a 40oC.
		As temperaturas verificadas em cada dia estao disponiveis em uma unidade de entrada de dados.
		Fazer um algoritmo que calcule e imprima:
		- A menor temperatura ocorrida;
		- A maior temperatura ocorrida;
		- A temperatura media;
		- O numero de dias nos quais a temperatura foi inferior a temperatura media
	*/
	
	float temp[121], maior_temp=15, menor_temp=40, temp_media, sum_temp=0;
	int qnt_abaixo_med=0;
	
	for (int i = 0; i<12; i++) {
		do {
			printf("Temperatura do %d° dia: ", i+1);
			scanf("%f", &temp[i]);
		} while(temp[i]<15 || temp[i]>40);
		
		sum_temp += temp[i];
		
		if (temp[i]>maior_temp) {
			maior_temp = temp[i];
		}
		if (temp[i]<menor_temp) {
			menor_temp = temp[i];
		}
	}
	
	temp_media = sum_temp / 12;
	
	for (int i = 0; i<12; i++) {
		if (temp[i] < temp_media) {
			qnt_abaixo_med ++;
		}
	}
	
	printf("========================================================\n");
	printf("A menor temperatura registrada foi: %.1f°C\n", menor_temp);
	printf("A maior temperatura registrada foi: %.1f°C\n", maior_temp);
	printf("A media entre as temperaturas registradas é: %.1f°C\n", temp_media);
	printf("No periodo de 121 dias foram registradas %d temperaturas abaixo da média. ", qnt_abaixo_med);
}