#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "Portuguese");
	
	//Ler nome, endereço e telefone e imprimi-los
	
	char nome[20], endereco[50];
	int telefone;
	
	printf("Digite o seu nome: ");
	gets(nome);
	printf("Digite o seu endereço: ");
	gets(endereco);
	printf("Digite o seu numero de telefone: ");
	scanf("%d", &telefone);
	
	printf("Seu nome é %s\nSeu endereço é %s\nSeu telefone é %d", nome, endereco, telefone);
}