#include <stdio.h>
#include <locale.h>

main () {
	setlocale(LC_ALL,"Portuguese");
	printf("Ol� Mundo!");
}