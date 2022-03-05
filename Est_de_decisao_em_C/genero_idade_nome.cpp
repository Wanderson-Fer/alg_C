#include <stdio.h>
#include <string.h>
#include <locale.h>

main () {
	setlocale(LC_ALL, "Portuguese");
	
	/*
		Entrar com nome, sexo e idade de uma pessoa. 
		Se a pessoa for do sexo masculino e tiver menor que 35 anos, 
		imprimir nome e a mensagem: ACEITA. 
		Caso contrário, imprimir nome e a mensagem: NÃO ACEITA. (Considerar f ou F.)
	*/
	
	char nome[20], genero[1];
	int idade;
	
	printf("Digite o seu nome: ");
	scanf("%s", &nome);
	printf("Informe seu gênero:\n[F ou f] Ferminino\n[M ou m] masculino\n==> ");
	scanf("%s", &genero);
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	if (idade < 35 && (strcmp(genero, "M")==0 || strcmp(genero, "m")==0)) {
		printf("%s -- Aceito!", nome);
	} else {
		printf("Não aceito!");
	}
}