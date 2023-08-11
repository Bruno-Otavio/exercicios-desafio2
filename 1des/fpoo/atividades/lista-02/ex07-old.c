#include <stdio.h>

/*
    Escreva um programa que leia 5 números inteiros em qualquer ordem
    e exiba na tela ao final, os cinco números em ordem crescente.
*/

int main() {
    int numArray[6];
    int n = (sizeof(numArray) / sizeof(numArray[0])) - 1;

    int i;
    for (i = 0; i < n; i++) {
        printf("Digite o %d valor diferente de 0: ", i+1);
        scanf("%d", &numArray[i]);
    }

    int min = numArray[0];
    int order[5];

    int pos;
    for (pos = 0; pos < n; pos++) {
        int numPos;
        for (i = 0; i < n; i++) {
            if (numArray[i] < min && numArray != 0) {
                min = numArray[i];
                numPos = i;
            }
        }
        order[pos] = min;
        printf("min: %d \norder[%d]: %d \nnumPos: %d \n==============\n", min, pos, order[pos], numPos);
        for (i = numPos; i < n - (pos + 1); i++) {
            numArray[i] = numArray[i+1];
        }
        for (i = 0; i < n; i++) {
            printf("numArray[%d]: %d\n", i, numArray[i]);
        }
    }

    for (i = 0; i < n; i++) {
        printf("final order: %d \n", order[i]);
    }

    return 0;
}
