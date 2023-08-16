#include <stdio.h>

/*
	Faça um programa que imprima na tela a soma dos valores inteiros entre 0 e 100;
*/

int main()
{
	int sum, i;
	
	for (i = 1; i < 100; i++) {
		sum += i;
	}
	printf("A soma dos valores entre 0 e 100 e igual a %d", sum);
	
	return 0;
}
