#include <stdio.h>

/*
    Escreva um programa que leia 5 números inteiros em qualquer ordem
    e exiba na tela ao final, os cinco números em ordem crescente.
*/

int main() {
	int numArray[5], order[5];
	int n = sizeof(numArray) / sizeof(numArray[0]);

	int i;
	for (i = 0; i < n; i++) {
		printf("Digite o %d valor: ", i+1);
		scanf("%d", &numArray[i]);
	}

	int min = numArray[0];
	int delPos;

    int ordpos;
	while (ordpos < n){
		i = 0;
        for (i = 0; i < n; i++) {
            if (numArray[i] < min && numArray != 0) {
                min = numArray[i];
                delPos = i;
            }
        }

        printf("dP: %d ", delPos);
        order[ordpos] = min;

        for (i = delPos; i < n - (ordpos + 1); i++) {
            numArray[i] = numArray[i+1];
        }
        printf("nA: %d | ", numArray[ordpos]);
        ordpos++;
    }

	for (i = 0; i < n; i++) {
		printf("\n%d ", order[i]);
	}
    return 0;
}
