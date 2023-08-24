#include <stdio.h>

/*
	Escreva um programa que leia 10 n�meros inteiros e exiba na tela ao final, 
	o maior n�mero que foi digitado pelo usu�rio.
*/

int main()
{
	int numberArray[10];
	int sizeArray = sizeof(numberArray) / sizeof(numberArray[0]);
		
	int i;
	for (i = 0; i < sizeArray; i++) {
		printf("Digite seu %d valor: ", i+1);
		scanf("%d", &numberArray[i]);
	}
	
	int max = numberArray[0];

	for (i = 0; i < sizeArray; i++) {
		if (numberArray[i] > max) {
			max = numberArray[i];
		}
	}
	
	printf("O maior numero digitado foi: %d", max);
	
	return 0;
}
