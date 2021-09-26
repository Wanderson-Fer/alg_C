#include <stdio.h>
#include <locale.h>

main () {
	setlocale(LC_ALL, "Portuguese");
	
	/*
		Um armazém trabalha com 100 mercadorias diferentes identificadas pelos números inteiros de 1 a 100.
		O dono do armazém anota a quantidade de cada mercadoria vendida durante o mês.
		Ele tem uma tabela que indica, para cada mercadoria, o preço de venda.
		Escreva um algoritmo para calcular o faturamento mensal do armazém.
		A tabela de preços é fornecida seguida pelos números das mercadorias e as quantidades vendidas.
		Quando uma mercadoria não tiver nenhuma venda, é informado o valor zero no lugar da quantidade.
	*/
	
	int qnt_vendidos[100];
	float precos[100], fat_mensal=0;
	
	for (int i = 0; i<100; i++) {
		printf("\n------------------------------------\n");
		printf("Código da mercadoria [%d]\n", i+1);
		printf("Digite o preco: ");
		scanf("%f", &precos[i]);
		printf("Digite a quantidade vendida no mês: \nDigite 0 [zero] para nenhuma venda ");
		scanf("%d", &qnt_vendidos[i]);
		
		fat_mensal += precos[i] * qnt_vendidos[i];
	}
	
	printf("\n============================================\n");
	printf("A fatura mensal relativa a tabela informada é $%.2f", fat_mensal);
}