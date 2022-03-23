#include <stdio.h>
#include <string.h>

main () {
	char str1[100], str2[100];

	printf("digite a primeira informacao: (str1)");
	scanf("%[^\n]", &str1);
	printf("digite a segunda informacao: (str2)");
	scanf(" %[^\n]", &str2);

	strcat(str1, str2);
	printf("\nstr1: %s\n", str1);
}