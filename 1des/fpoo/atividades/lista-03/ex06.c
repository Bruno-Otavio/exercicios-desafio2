#include <stdio.h>

/*
	Fa�a um programa que solicite que o usu�rio digite um valor inteiro, 
	positivo e imprima todos os valores �mpares entre 0 e o n�mero digitado;
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
