#include <stdio.h>

/*
    Desenvolva um programa que leia 6 números inteiros e exiba na tela ao final,
    o maior número que foi digitado pelo usuáriou.
*/

int main() {
    int numArray[6];
    int n = sizeof(numArray) / sizeof(numArray[0]);

    int i;
    for (i = 0; i < n; i++) {
        printf("Digite o seu %d valor: ", i+1);
        scanf("%d", &numArray[i]);
    }

    int max = numArray[0];

    for (i = 0; i < n; i++) {
        if (numArray[i] > max) {
            max = numArray[i];
        }
    }

    printf("O maior numero dado foi %d", max);

    return 0;
}
