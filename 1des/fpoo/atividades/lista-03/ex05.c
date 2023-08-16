#include <stdio.h>

/*
	Faça um programa que solicite que o usuário digite um valor inteiro, 
	positivo e imprima todos os valores entre 0 e o número digitado de 2 em 2;
*/

int main()
{
	int number, i;
	
	printf("Digite a seguir um valor inteiro positivo: ");
	scanf("%d", &number);
	
	for (i = 0; i <= number; i += 2) {
		printf("%d\n", i);
	}
	
	return 0;
}
