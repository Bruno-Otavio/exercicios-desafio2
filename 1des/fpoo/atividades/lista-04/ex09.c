#include <stdio.h>
#include <locale.h>

/*
	Crie um vetor de tamanho 10, permita que o usu�rio o preencha, como sa�da informe:
	A soma e m�dia dos pares; A soma e m�dia dos impares;
	O total de n�meros pares; O total de n�meros impares;
*/

int main() {
	setlocale(LC_ALL, "");
	
	int numbers[10];
	int evens, evensSum, evensAverage = 0;
	int odds, oddsSum, oddsAverage = 0;
	
	int i;
	for (i = 0; i < 10; i++) {
		printf("Digite o %d� n�mero: ", i+1);
		scanf("%d", &numbers[i]);
		
		if (numbers[i] % 2 == 0) {
			evens += 1;
			evensSum += numbers[i];
		} else if (numbers[i] % 2 == 1) {
			odds += 1;
			oddsSum += numbers[i];
		}
	}
	
	if (evens != 0) {
		evensAverage = evensSum / evens;
		
		printf("\nEm rela��o aos n�meros pares que voc� passou: \n");
		printf("Total \t Soma \t M�dia\n");
			
		printf("%d \t %d \t %d\n", evens, evensSum, evensAverage);
	} else 
		printf("\nVoc� n�o passou nenhum n�mero par.\n");
		
	if (odds != 0) {
		oddsAverage = oddsSum / odds;
		
		printf("\nEm rela��o aos n�meros impares que voc� passou: \n");
		printf("Total \t Soma \t M�dia\n");
			
		printf("%d \t %d \t %d\n", odds, oddsSum, oddsAverage);
	} else
		printf("\nVoc� n�o passou nenhum n�mero �mpar.\n");

	
	return 0;
}
