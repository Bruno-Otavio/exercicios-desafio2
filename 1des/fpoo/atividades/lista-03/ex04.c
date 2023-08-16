#include <stdio.h>

/*
	Faça um programa que solicite que o usuário digite dois valores inteiros diferentes e imprima todos os valores entre o um número e o outro;
*/

int main()
{
	int number1, number2;
	printf("Digite seu primeiro valor inteiro positivo: ");
	scanf("%d", &number1);
	
	printf("Digite seu segundo valor inteiro positivo: ");
	scanf("%d", &number2);
	
	int i;
	if (number1 < number2) {
		for (i = number1 + 1; i != number2; i++) {
			printf("%d \n", i);
		}
	} else if (number1 > number2) {
		for (i = number1 - 1; i != number2; i--) {
			printf("%d \n", i);
		}
	} else {
		printf("Voce digitou valores iguais.");
	}
	
	return 0;
}
