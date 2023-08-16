#include <stdio.h>

/*
	Faça um programa que solicite que o usuário digite um valor inteiro, positivo e imprima todos os valores entre 0 e o número digitado;
*/

int main()
{
	int number;
	printf("Digite um valor inteiro positivo: ");
	scanf("%d", &number);
	
	int i;
	for (i = 0; i <= number; i++) {
		printf("%d \n", i);
	}
		
	return 0;
}
