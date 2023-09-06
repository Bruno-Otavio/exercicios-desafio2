#include <stdio.h>
#include <locale.h>

/*
    Desenvolva um programa que leia o nome de 5 cidades,
    seu respectivo número total de eleitores e o total de votos apurados na última eleição.
    O programa deverá calcular e exibir a porcentagem de participação dos eleitores na eleição para 5 cidades.
*/

int main() {
	setlocale(LC_ALL, "");
	
	char cities[5][32];
	int electors[5], votes[5];
	float participants[5];
	
	printf("Calcular porcentagem de participantes eleitorais de 5 cidades.\n");
	
	int i;
	for (i = 0; i < 5; i++) {
		printf("\nDigite o nome da %d� cidade: ", i+1);
		scanf("%s", &cities[i]);
		
		printf("N�mero total de eleitores: ");
		scanf("%d", &electors[i]);
		
		printf("Total de votos apurados: ");
		scanf("%d", &votes[i]);
		
		participants[i] = votes[i] * 100 / (float)electors[i];
	}
	
	printf("\nPorcentagem total de participantes da elei��o de cada cidade: \n");
	printf("\nCidade \t\t Porcentagem \n");
	for (i = 0; i < 5; i++) {
		printf("%s \t %.2f\n", cities[i], participants[i]);
	}
	
    return 0;
}
