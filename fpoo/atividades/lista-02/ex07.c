#include <stdio.h>

/*
    Escreva um programa que leia 5 números inteiros em qualquer ordem
    e exiba na tela ao final, os cinco números em ordem crescente.
*/

int main() {
	int numArr[5], order[5];
	int n = sizeof(numArr) / sizeof(numArr[0]);
	int i, iniPos, delPos, tempValue;
	
	for (i = 0; i < n; i++) {
		printf("Digite o %d valor: ", i+1);
		scanf("%d", &numArr[i]);
	}

	int min = numArr[0];

	for (iniPos = 0; iniPos < n; iniPos++) {
		for (i = iniPos; i < n - iniPos; i++) {
		    if (numArr[i] < min) {
		        min = numArr[i];
		        delPos = i;
		        printf("\ni: %d", i);
		    }
		}
		tempValue = numArr[iniPos];
		numArr[iniPos] = min;
		numArr[delPos] = tempValue;
		
		for (i = 0; i < n; i++) {
			printf("\nnumArr: %d ", numArr[i]);
		}
		
		printf("\ntempValue: %d", tempValue);
		printf("\nnumArr[%d]: %d", iniPos, numArr[iniPos]);
		printf("\nantiga posicao numArr[%d]: %d", delPos, numArr[delPos]);
	}
	
	for (i = 0; i < n; i++) {
		printf("\nnumArr: %d ", numArr[i]);
	}
	
    return 0;
}
