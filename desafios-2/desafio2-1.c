#include <stdio.h>

/*
    Desenvolva um programa que leia três variáveis (a, b, c) e resolva a expressão: ( a + b ) / c.
*/

int main() {
    int firstValue;
    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &firstValue);

    int secondValue;
    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &secondValue);

    int thirdValue;
    printf("Digite o terceiro valor inteiro: ");
    scanf("%d", &thirdValue);

    float result = (firstValue + secondValue) / thirdValue;

    printf("A soma de %d e %d divida por %d e igual a %.2f", firstValue, secondValue, thirdValue, result);

    return 0;
}
