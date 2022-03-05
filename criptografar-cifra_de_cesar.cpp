#include <stdio.h>
#include <ctype.h>
//#include <locale.h>
#include <string.h>

maiusculo (char str[]){
	int i = 0;
	while (str[i] != '\0') {
		str[i] = toupper(str[i]);
		i++;
	}
}

main () {
	char mens[100],
		alfabeto[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ", 
		cifra[27] =    "NOPQRSTUVWXYZABCDEFGHIJKLM",
		mens_cripto[100];
	int comp;
	//setlocale(LC_ALL, "portuguese");
	printf("Informe a frase: ");
	gets(mens);
	maiusculo(mens); 
	printf("\nA frase informada: %s\n", mens);
	
	comp = strlen(mens);
	maiusculo(mens);
	printf("\ncomprimento: %d\n", comp);
	
	for (int i = 0; i<comp; i++) {
		for (int j = 0; j < 26; j++) {
			if (mens[i] == alfabeto[j]) {
				mens_cripto[i] = cifra [j];
			} else if (mens[i] == ' ') {
				mens_cripto[i] = ' ';
				
			}
		}	
	}
	printf("\nCriptografando %s", mens_cripto);
}