#include <stdio.h>
#include <locale.h>

main () {
	setlocale(LC_ALL,"Portuguese");
	
	//variaveis
	char nome[20];
	int idade, idade_amigos[20], indice = 0, num=0, sum=0, pagador=0, dia_da_semana;
	float med, conta, valor_a_pagar;
	
	//saida
	printf("Ola mundo!");
	
	//entrada e saida
	printf("\nQual o seu nome? ");
	scanf("%s", &nome);
	
	printf("Ola %s\n", nome);
	
	//estrutura de decisao
	printf("Qual a sua idade? ");
	scanf("%d", &idade);
	
	if (idade >= 18) { // se for maior de idade
		printf("Vamos tomar uma %s? \n", nome);
	} else { // se não for maior de idade
		printf("Acho que um lanche cairia bem não eh?! %s\n", nome);
	}
	
	printf("Que dia da semana sera?\n"); //Tabela para escolha de dados 
	printf("[1] Domingo\n");
	printf("[2] Segunda\n");
	printf("[3] Terca\n");
	printf("[4] Quarta\n");
	printf("[5] Quinta\n");
	printf("[6] Sexta\n");
	printf("[7] Sabado\n");
	scanf("%d", &dia_da_semana); //armazenando a informacao na variavel
	
	switch(dia_da_semana) { // resgatando a informacao na variavel. O 'switch' escolhe a informacao da variavel e analisa ela
		case 1:  // caso o valor na variavel seja 1 executa o codigo ate encontrar o 'break'
			printf("Ai sim! assim que se termina um fim de semana!\nDomingo vai ser massa!\n");
			break;
		case 2: // executa aqui se o valor for 2
			printf("Sei nem como eu vou pra aula!!!\nAssim que se comeca a semana!!!\n");
			break;
		case 3: // caso seja 3
			printf("Sei nem como eu vou pra aula!!!\n");
			break;
		case 4: //mesma coisa
			printf("Sei nem como eu vou pra aula!!!\n");
			break;
		case 5:
			printf("Sei nem como eu vou pra aula!!!\n");
			break;
		case 6:
			printf("Acho que esse vai ser um longo fim de semana!!!\nHEHEHE!\n");
			break;
		case 7:
			printf("SABADOU!!!!!\nAh hora das criancas acabou!!!\n");
			break;
		default: //caso nao digite nenhum dos valores anteriores
			printf("Voce nao digitou um valor valido\n")
	}
	
	//estrutura de repeticao
	printf("Vamos chamar seus amigos?\n");
	
	do { //vai executar abaixo normalmente
		printf("Qual a idade do %d amigo? ", indice+1);
		scanf("%d", &idade_amigos[indice]);
		
		if (idade_amigos[indice] < 18) { 
			printf("Só avisando que bebidas não serão permitidas hein!!!!\n"); //ate parece
		}
		
		printf("Tem mais um? \n[1] para sim \ne qualquer outro numero para não\n");
		scanf("%d", &num);
		printf(" = %d\n", num);
		
		sum += idade_amigos[indice]; //um somatorio acrescenta um valor somando ao valor anterior, para napo perder conteudo
		med = sum/(indice+1); // calculando a media, para saber a quantidade de amigos foi somado um ao indice pq o indice comecou em 'zero'
		
		indice++;		
	}while(num==1); //vai retornar para o começo do bloco se a condicao for verdadeira. Nesse caso 'num' igual a '1'
	
	for (int i = 0; i < indice; i++) { //analisando o vetor 'idade_amigos'. considerando que o vetor será o indice definido no bloco anterior
		if (idade_amigos[i] >= med) { //somente os mais velhos irao pagar a nossa farra
			pagador ++;
			printf("O amigo nmr %d vai pagar\n", indice+1); //de acordo com a ordem de idades digitadas no bloco anterior
		}
	}
	
	printf("Vamos compartilhar o valor entre %d pessoas\n", pagador);
	printf("Quanto é a conta? ");
	scanf("%f", &conta);
	
	valor_a_pagar = conta/pagador;
	
	printf("Cada um vai pagar %.2f", valor_a_pagar);

	
}
	