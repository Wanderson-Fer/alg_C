#include <stdio.h>
#include <locale.h>

main () {
	setlocale(LC_ALL, "Portuguese");
	
	//Ler um número inteiro e imprimir seu sucessor e seu antecessor
	
	int number; //declarando uma variavel para receber a entrada do usuário
	
	printf("Digite um número inteiro: "); //Pedindo ao usuário que digite um número
	scanf("%d", &number); //Armazenando o valor digitado na variável
	
	printf("\nO antecessor é %d", number-1); //exibindo a variável com o decremento de uma unidade
	printf("O sucessor é %d", number+1); //exibindo a variável com o incremento de uma unidade
}