#include <stdio.h>
#include <locale.h>

/*
	Escreva um programa que leia 5 números inteiros em qualquer ordem e exiba na tela ao final,
	os cinco números em ordem decrescente.
*/

int main() {
	setlocale(LC_ALL, "");
	
	int numbers[5];
	
	int i, j;
	for (i = 0; i < 5; i++) {
		printf("Digite o %d° número: ", i+1);
		scanf("%d", &numbers[i]);
	}
	
	int max, temp;
	for (i = 0; i < 5; i++) {
		max = i;
		for (j = i; j < 5; j++) {
			if (numbers[j] > numbers[max])
				max = j;
		}
		temp = numbers[i];
		numbers[i] = numbers[max];
		numbers[max] = temp;
	}
	
	printf("Os números inseridos em ordem decrescente: ");
	for (i = 0; i < 5; i++) {
		printf("%d ", numbers[i]);
	}
	
	return 0;
}
