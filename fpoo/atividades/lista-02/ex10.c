#include <stdio.h>

/*
    Crie um programa que calcule a média de 3 notas do aluno e informe sua situação:
    se (nota maior ou igual a 6 : aprovado),
    se (nota inferior a 6 e maior ou igual a 4 : recuperação),
    se (nota menor que 4 : reprovado).
*/

int main() {
    float a, b, c;
    printf("Digite a seguir suas 3 notas separadas por espaços: ");
    scanf("%f %f %f", &a, &b, &c);

    float result = (a + b + c) / 3;
    if (result >= 6)
        printf("Voce foi Aprovado.");
    else if (result < 6 && result >= 4)
        printf("Voce esta de Recuperacao.");
    else
        printf("Voce foi Reprovado.");

    return 0;
}
