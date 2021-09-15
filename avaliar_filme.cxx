#include <stdio.h>

main() {
	//Criar um algoritmo que receba a idade e a opinião de vários espectadores e analise a opniao
	
	int idade, avaliacao, sum_idade = 0, med_idade, qnt_exc = 0, qnt_reg, repeat;
	float per_bom,qnt_bom, num_pessoas;
	//O uso das variáveis será comentado abaixo
	
	do { //Utilizando o 'do' para necessariamente 'excutar uma vez', além de ser um 'loop indefinido'
		printf("\nInforme sua idade: ");
		scanf("%d", &idade); //recebendo a idade do espectador corrente na variável 'idade'
		printf("\nAvalie o filme de acordo com a tabela abaixo: (digitando o numero)"); //tem que explicar direito, pq usuário já viu né...
		printf("\n---- Excelente ---- [3]");
		printf("\n------- Bom ------- [2]");
		printf("\n----- regular ----- [1]");
		printf("\n==>"); //tabela de avaliação exibida ao usuário
		scanf("%d", &avaliacao); //armazenando a avaliação na variável 'avaliacao'
		
		switch (avaliacao) { //escolhendo a proxima ação de acordo com a avaliação do usuário
			case 3: // para 'excelente'
				qnt_exc ++; // quantidade de pessoas com essa opniao para calcular a media posteriormente
				sum_idade += idade; // o somatorio das idades para calcular a media posteriormente
				break; // saindo do 'switch'
			case 2: //para 'bom'
				qnt_bom++; // a quantidade de pessoas que responderam 'bom' para calcular a porcentagem posteriormente
				break; // saindo do 'switch'
			case 1: //para 'regular'
				qnt_reg ++; // a quantidade de pessoas que responderam regular
				break; // saindo do 'switch'
			default:
				printf("Valor da avaliacao incorreto, tente novamente");
				//não é necessário 'break', pois não há nada abaixo no bloco switch para evitar executar
				
		}
		
		printf("\nPara reponder formulario novamente digite 1:"); //esperando decisão do usuário para seguir ou repetir o formulario
		scanf("%d", &repeat); //variavel contendo a resposta do usuário 
	}while(repeat == 1); //analisando resposta para seguir ou repetir o formulário
	
	med_idade = sum_idade / qnt_exc; //Calculando a media de idade de quem respondeu excelente
	printf("\nA media da idade das pessoas que responderam excelente e: %d.", med_idade); // exibindo a media
	printf("\n%d pessoas responderam regular.", qnt_reg); //exibindo a quantidade de pessoas que responderam regular
	num_pessoas = qnt_exc + qnt_bom + qnt_reg; //obtendo o numero total de participantes da pesquisa para calcular a porcentagem de 'bom'
	per_bom = (qnt_bom * 100) / num_pessoas; //calculando a porcentagem de pessoas que escolheram 'bom' em relaçao ao total
	printf("\nDo total de pessoas: %.0f\n %.2f por cento reponderam 'Bom'", num_pessoas, per_bom); // exibindo a porcentagem de 'bom' em relaçao ao total
}