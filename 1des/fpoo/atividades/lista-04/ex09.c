#include <stdio.h>
#include <locale.h>

/*
	Crie um vetor de tamanho 10, permita que o usuário o preencha, como saída informe:
	A soma e média dos pares; A soma e média dos impares;
	O total de números pares; O total de números impares;
*/

int main() {
	setlocale(LC_ALL, "");
	
	int numbers[10];
	int evens, evensSum, evensAverage = 0;
	int odds, oddsSum, oddsAverage = 0;
	
	int i;
	for (i = 0; i < 10; i++) {
		printf("Digite o %d° número: ", i+1);
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
		
		printf("\nEm relação aos números pares que você passou: \n");
		printf("Total \t Soma \t Média\n");
			
		printf("%d \t %d \t %d\n", evens, evensSum, evensAverage);
	} else 
		printf("\nVocê não passou nenhum número par.\n");
		
	if (odds != 0) {
		oddsAverage = oddsSum / odds;
		
		printf("\nEm relação aos números impares que você passou: \n");
		printf("Total \t Soma \t Média\n");
			
		printf("%d \t %d \t %d\n", odds, oddsSum, oddsAverage);
	} else
		printf("\nVocê não passou nenhum número ímpar.\n");

	
	return 0;
}
