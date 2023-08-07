#include <stdio.h>

/*
    Escreva um programa que leia 5 números inteiros em qualquer ordem
    e exiba na tela ao final, os cinco números em ordem crescente.
*/

int main() {
	int numArray[5];
	int n = sizeof(numArray) / sizeof(numArray[0]);

	int i, r;
	for (i = 0; i < n; i++) {
		printf("Digite o %d valor: ", i+1);
		scanf("%d", &numArray[i]);
	}

	int min = numArray[0];
	int order[5];

	int ordpos;
	int delPos;
	for (ordpos = 0; ordpos < n; ordpos++) {
		printf("\nnumArray[%d]: %d \n", ordpos, numArray[ordpos]);
		for (i = 0; i < n; i++) {
			if (numArray[i] < min && numArray[i] != 0)
				min = numArray[i];
				delPos = i;
		}

		order[ordpos] = min;
		printf("order[%d]: %d \n", ordpos, order[ordpos]);
		printf("delpos: %d \n", delPos);

		for (r = delPos; r < n - (ordpos + 1); r++) {
			numArray[r] = numArray[r+1];
			printf("posProc, numArray[%d]: %d \n", i, numArray[i]);
		}
	}

	for (i = 0; i < n; i++) {
		printf("\n%d ", order[i]);
	}

    return 0;
}
