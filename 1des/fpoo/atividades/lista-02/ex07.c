#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    int aux;

    printf("Digite 5 numeros separados por espaços: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if (a > b) {
        aux = a;
        a = b;
        b = aux;
    }
    if (b > c) {
        aux = b;
        b = c;
        c = aux;
    }
    if (c > d) {
        aux = c;
        c = d;
        d = aux;
    }
    if (d > e) {
        aux = d;
        d = e;
        e = aux;
    }

    if (a > b) {
        aux = a;
        a = b;
        b = aux;
    }
    if (b > c) {
        aux = b;
        b = c;
        c = aux;
    }
    if (c > d) {
        aux = c;
        c = d;
        d = aux;
    }
    if (d > e) {
        aux = d;
        d = e;
        e = aux;
    }

    if (a > b) {
        aux = a;
        a = b;
        b = aux;
    }
    if (b > c) {
        aux = b;
        b = c;
        c = aux;
    }
    if (c > d) {
        aux = c;
        c = d;
        d = aux;
    }
    if (d > e) {
        aux = d;
        d = e;
        e = aux;
    }

    if (a > b) {
        aux = a;
        a = b;
        b = aux;
    }
    if (b > c) {
        aux = b;
        b = c;
        c = aux;
    }
    if (c > d) {
        aux = c;
        c = d;
        d = aux;
    }
    if (d > e) {
        aux = d;
        d = e;
        e = aux;
    }

    printf("%d %d %d %d %d", a, b, c, d, e);

    return 0;
}
