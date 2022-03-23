#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

struct today {
	char space[3];
	char abrev[4][3];
} dayweek[7];

void maiusculo (char str[]){
	int i = 0;
	while (str[i] != '\0') {
		str[i] = toupper(str[i]);
		i++;
	}
}

char* concat(char *string_a, char *string_b) {
	int i;
	for(i=0; string_a[i]!='\0'; ++i); //Percorre toda a string_a, para saber o tamanho da mesma
	for(int j=0; string_b[j]!='\0'; ++j, ++i) { //Percorre toda a string_b, para concatena-la
		string_a[i]=string_b[j];
	}
    string_a[i]='\0';

    return string_a;
}

void innit() {
	//DOMINGO
	strcpy(dayweek[0].space, "XP");
	strcpy(dayweek[0].abrev[0], "PC");
	strcpy(dayweek[0].abrev[1], "SC");
	strcpy(dayweek[0].abrev[2], "TC");
	strcpy(dayweek[0].abrev[3], "QC");
	//SEGUNDA
	strcpy(dayweek[1].space, "ZP");
	strcpy(dayweek[1].abrev[0], "RC");
	strcpy(dayweek[1].abrev[1], "ZC");
	strcpy(dayweek[1].abrev[2], "FC");
	strcpy(dayweek[1].abrev[3], "LC");
	//TERCA
	strcpy(dayweek[2].space, "WP");
	strcpy(dayweek[2].abrev[0], "UC");
	strcpy(dayweek[2].abrev[1], "AC");
	strcpy(dayweek[2].abrev[2], "GC");
	strcpy(dayweek[2].abrev[3], "MC");
	//QUARTA
	strcpy(dayweek[3].space, "YP");
	strcpy(dayweek[3].abrev[0], "VC");
	strcpy(dayweek[3].abrev[1], "BC");
	strcpy(dayweek[3].abrev[2], "HC");
	strcpy(dayweek[3].abrev[3], "NC");
	//QUINTA
	strcpy(dayweek[4].space, "LP");
	strcpy(dayweek[4].abrev[0], "WC");
	strcpy(dayweek[4].abrev[1], "CC");
	strcpy(dayweek[4].abrev[2], "IC");
	strcpy(dayweek[4].abrev[3], "OC");
	//SEXTA
	strcpy(dayweek[5].space, "KP");
	strcpy(dayweek[5].abrev[0], "XC");
	strcpy(dayweek[5].abrev[1], "DC");
	strcpy(dayweek[5].abrev[2], "JC");
	strcpy(dayweek[5].abrev[3], "PD");
	//SABADO
	strcpy(dayweek[6].space, "HP");
	strcpy(dayweek[6].abrev[0], "YC");
	strcpy(dayweek[6].abrev[1], "EC");
	strcpy(dayweek[6].abrev[2], "KC");
	strcpy(dayweek[6].abrev[3], "QD");

}

main () {
	char alfabeto [4][10] = {
		"012ABCDEF",
		"34GHIJKLM",
		"567NOPQRS",
		"89TUVWXYZ"
	};
	char mens[5000], mens_cript[5000], abreviacao[3], buf[10];
	int day, comp;
	innit();

	printf("Informe o dia da semana: \n");
	printf("1 - DOMINGO\n2 - SEGUNDA\n3 - TERCA\n4 - QUARTA\n5 - QUINTA\n6 - SEXTA\n7 - SABADO\n==> ");
	scanf("%d", &day);

	printf("Digite a mensagem a ser codificada: ");
	scanf(" %[^\n]", mens);

	maiusculo(mens);
	comp = strlen(mens);
	printf("verify \n==>%s \n", mens);

	for (int i = 0; i < comp; i++) {
		for (int l = 0; l < 4; l++) {
			for (int c = 0; c < 9; c++) {
				itoa(c+1, buf, 10);
				//printf("alfabeto ==> %c \n", alfabeto[l][c]);
				if (mens[i] == alfabeto[l][c]) {
					strcpy(abreviacao, dayweek[(day-1)].abrev[l]);
					//printf("this ==>%c \n", alfabeto[l][c]);
					//printf("abrv ==>%s \n", abreviacao);
					strcat(abreviacao, buf);
					printf("abrev ==>%s \n", abreviacao);
					//concat(mens_cript, abreviacao);
					printf("verify cripto ==>%s \n", mens_cript);
				} else if (mens[i] == ' ') {
					concat(mens_cript, dayweek[(day-1)].space);
				}
			}
		}
	}

	printf("verify cripto \n==>%s \n", mens_cript);
}