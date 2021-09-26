#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "Portuguese");
	
	//Criar um algoritmo que leia um valor de hora e informe quantos minutos se passaram desde o inicio do dia.
	
	float horas;
	
	printf("Digite o horário atual separado por vírgula no formato [24h]: ");
	scanf("%f", &horas);
	
	printf("Já se passaram %.1f minutos do começo do dia [00:00]", horas*60);
}