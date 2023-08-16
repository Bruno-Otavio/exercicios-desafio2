#include <stdio.h>

/*
	Faça um programa que solicite que o usuário digite um valor inteiro, 
	positivo e imprima todos os valores ímpares entre 0 e o número digitado;
*/

int main()
{
	int number, i;
	
	printf("Digite um valor inteiro positivo: ");
	scanf("%d", &number);
	
	for (i = 1; i <= number; i += 2) {
		printf("%d\n", i);
	}
	
	return 0;
}
