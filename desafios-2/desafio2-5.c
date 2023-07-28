#include <stdio.h>

/*
    Desenvolva um programa que leia um número ”n” inteiro,
    positivo e diferente de zero e apresente na tela: n – 1, e também n + 1.
*/

int main() {
    int num;
    printf("Digite um numero inteiro positivo diferente de zero: ");
    scanf("%d", &num);

    int result1 = num - 1;
    int result2 = num + 1;

    printf("%d - 1 = %d\n%d + 1 = %d", num, result1, num, result2);

    return 0;
}
