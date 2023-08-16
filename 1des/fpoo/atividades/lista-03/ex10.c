#include <stdio.h>

/*
	Escreva um programa que leia 10 números inteiros e exiba na tela ao final, 
	o maior número que foi digitado pelo usuário.
*/

int main()
{
	int numberArray[10];
	int sizeArray = sizeof(numberArray) / sizeof(numberArray[0]);
	int iniPos, maxPos, maxCount, tempValue;
	
	int i;
	for (i = 0; i < sizeArray; i++) {
		printf("Digite seu %d valor: ", i+1);
		scanf("%d", &numberArray[i]);
	}
	
	int max = numberArray[0];

	for (iniPos = 0; iniPos < sizeArray; iniPos++) {
		max = numberArray[iniPos];
		maxPos = iniPos;
		
		for (maxCount = iniPos + 1; maxCount < sizeArray; maxCount++) {
			if (numberArray[maxCount] > max) {
				max = numberArray[maxCount];
				maxPos = maxCount;
			}
		}
		tempValue = numberArray[iniPos];
		numberArray[iniPos] = max;
		numberArray[maxPos] = tempValue;	
	}
	
	for (i = 0; i < sizeArray; i++) {
		printf("%d\n", numberArray[i]);
	}
	
	return 0;
}
