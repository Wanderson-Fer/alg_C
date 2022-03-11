#include <stdio.h>
//
void funcao_ponteiro(int *p){
	++*p;
	printf("%d", p);
	
}

main () {
	
	int valor = 10;
	int *ponteiro = &valor;
	funcao_ponteiro(*(0x000000000023FF44));
	printf("%i" , &valor);


}