#include <stdio.h>

/*
	Escreva um programa que leia 5 números inteiros em qualquer ordem e exiba na tela ao final, os cinco números em ordem crescente.
*/

int main()
{
	int numberArray[5];
	int sizeArray = sizeof(numberArray) / sizeof(numberArray[0]);
	int iniPos, minPos, minCount, tempValue;
	
	int i;
	for (i = 0; i < sizeArray; i++) {
		printf("Digite seu %d valor: ", i+1);
		scanf("%d", &numberArray[i]);
	}
	
	int min = numberArray[0];

	for (iniPos = 0; iniPos < sizeArray; iniPos++) {
		min = numberArray[iniPos];
		minPos = iniPos;
		
		for (minCount = iniPos + 1; minCount < sizeArray; minCount++) {
			if (numberArray[minCount] < min) {
				min = numberArray[minCount];
				minPos = minCount;
			}
		}
		tempValue = numberArray[iniPos];
		numberArray[iniPos] = min;
		numberArray[minPos] = tempValue;	
	}
	
	for (i = 0; i < sizeArray; i++) {
		printf("%d\n", numberArray[i]);
	}
	
	return 0;
}
