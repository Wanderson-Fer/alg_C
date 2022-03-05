#include <stdio.h>

void sp_to_dash(char *str) {
	while(*str) {
		if(*str==' ')
			printf("%c", '-');
		else
			printf("%c", *str);
		str ++;
	}
}

int length (const char *str) {
	int cont = 0;
	
	while (str[cont] != '\0') {
		cont++;
	}
	return cont;
}

void sp_to_dote(char *str){
	int length_str = length(str);
	
	for (int i = 0; i<length_str; i++) {
		if (str[i] == ' ')
			printf(".");
		else
			printf("%c", str[i]);
	}
}

main () {
	char nome[20];
	
	printf("Digite o nome: ");
	gets(nome);
	
	printf("o nome digitado foi %s\n", nome);
	
	sp_to_dote(nome);
	
}