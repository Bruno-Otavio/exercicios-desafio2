#include <stdio.h>

/*
	Escreva um programa que exiba na tela a tabuada de um número que deverá ser informado pelo usuário entre 0 e 10;
*/

int main()
{
	int number, multiplied, i;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &number);
	
	for (i = 0; i <= 10; i++) {
		multiplied = number * i;
		printf("%2d x %2d = %d\n", number, i, multiplied);
	}
	
	return 0;
}
