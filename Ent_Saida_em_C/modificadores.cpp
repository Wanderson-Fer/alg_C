#include <stdio.h>
#include <string.h>

int main(void) {
	char str[100];
	
	printf("Hello world");
	do {
		printf("\nDigite:");
		scanf("%20s", str);
		printf("\nvalue: %s\n", str);
		printf("Continue? S/N\n");
		scanf("%s", str);
	} while(strcmp(str,"N"));
	return 0;
}