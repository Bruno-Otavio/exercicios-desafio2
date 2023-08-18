#include <stdio.h>

/*
	Faça um programa que peça para o usuário digitar um número inteiro positivo e calcule o fatorial deste número;
*/

int main()
{
	int number, factorial, i;
	
	printf("Digite um numero inteiro posiitvo: ");
	scanf("%d", &number);
	
	factorial = 1;
	for (i = number; i >= 1; i--) {
		printf("%d\n", i);
		factorial *= i;
	}
	printf("O fatorial do numero %d e igual a %d", number, factorial);
	
	return 0;
}
