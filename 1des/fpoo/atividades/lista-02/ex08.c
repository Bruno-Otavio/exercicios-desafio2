#include <stdio.h>

/*
    Escreva um programa que leia dois números inteiros e determine qual é o maior e o menor.
*/

int main() {
    int a, b;
    printf("Digite 2 valores separados por espaços: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("%d > %d", a, b);
    } else if (b > a) {
        printf("%d > %d", b, a);
    } else if (a < b) {
        printf("%d < %d", a, b);
    } else if (b < a) {
        printf("%d < %d", b ,a);
    }

	return 0;
}
