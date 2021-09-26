#include <stdio.h>
#include <locale.h>

main () {
	setlocale(LC_ALL, "Portuguese");
	
	//receba a altura de 10 atletas. imprimir a altura daqueles atletas que tem altura maior que a media
	
	float altura[10], media, sum=0;
	
	for (int i = 0; i<10; i++) {
		printf("Digite a altura do %d° atleta: ", i+1);
		scanf("%f", &altura[i]);
		
		sum += altura[i];
	}
	
	media = sum/10;
	
	printf("Acima da media: \n");
	for (int i = 0; i < 10; i++) {
		if (altura[i] > media) {
			printf("%d° atleta --> %.2f\n", i+1, altura[i]);
		}
	}
}