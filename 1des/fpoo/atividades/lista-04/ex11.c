#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

/*
    Crie um programa que gere um vetor com 10 números inteiros aleatórios entre 0 e 100,
    Localize um valor informado pelo usuário dentro do vetor. 
    Ex: 25 41 8 7 13 18 4 1 7 3, valor informado 13, está na posição 4 do vetor.
*/

int main() {
    setlocale(LC_ALL, "");
    
    int numbers[10];
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int userNumber;

    srand(time(0));

    int i;
    printf("Vetor: ");
    for (i = 0; i < size; i++) {
        numbers[i] = (rand() % 100) + 1;
        printf("%d ", numbers[i]);
    }

    printf("\nDigite um valor presente no vetor mostrado: ");
    scanf("%d", &userNumber);

    for (i = 0; i < size; i++) {
        if (numbers[i] == userNumber)
            printf("O valor %d está na posição %d\n", userNumber, i);
    }

    return 0;
}
