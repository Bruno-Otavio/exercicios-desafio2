#include <stdio.h>

/*
    Desenvolva um programa que leia 6 números inteiros e exiba na tela ao final,
    o maior número que foi digitado pelo usuáriou.
*/

int main() {
    int a, b, c, d, e, f;
    printf("Digite 6 numeros separados por espaços: ");
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

    int mNum = a;

    if (a > mNum) {mNum = a;}
    if (b > mNum) {mNum = b;}
    if (c > mNum) {mNum = c;}
    if (d > mNum) {mNum = d;}
    if (e > mNum) {mNum = e;}
    if (f > mNum) {mNum = f;}

    printf("O maior numero dentre os que voce listou e o numero %d", mNum);

    return 0;
}
