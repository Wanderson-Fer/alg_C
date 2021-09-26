#include <stdio.h>
#include <locale.h>

main () {
	
	//Ler dois números inteiros e imprimi-los
	
	int firstNumber, secondNumber; //Declarando variáveis para iserção de dados
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite o primeiro número: "); //exibir menssagem para o usuário
	scanf("%d", &firstNumber); //armazenando o que foi digitado na variável
	printf("Digite o segundo número: "); //De novo por que usuário já viu né
	scanf("%d", &secondNumber); //na outra variável agora
	
	printf("Os números digitados foram %d e %d", firstNumber, secondNumber); //saída dos números digitados
}