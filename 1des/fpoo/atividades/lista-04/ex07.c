#include <stdio.h>
#include <locale.h>

/*
	Escreva um programa que leia 5 n�meros inteiros em qualquer ordem e exiba na tela ao final,
	os cinco n�meros em ordem decrescente.
*/

int main() {
	setlocale(LC_ALL, "");
	
	int numbers[5];
	
	int i, j;
	for (i = 0; i < 5; i++) {
		printf("Digite o %d� n�mero: ", i+1);
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
	
	printf("Os n�meros inseridos em ordem decrescente: ");
	for (i = 0; i < 5; i++) {
		printf("%d ", numbers[i]);
	}
	
	return 0;
}
