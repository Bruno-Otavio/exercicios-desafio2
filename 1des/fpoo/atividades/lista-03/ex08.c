#include <stdio.h>

/*
	Fa�a um programa que pe�a para o usu�rio digitar um n�mero inteiro positivo e calcule o fatorial deste n�mero;
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
