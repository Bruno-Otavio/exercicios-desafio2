#include <stdio.h>

/*
    Desenvolva um programa que leia o raio (cm) e a altura (cm) de um cilindro.
    Calcule e mostre a área (cm2) e o volume (cm3) do cilindro.
*/

int main() {
    const float PI = 3.14;

    int raio;
    printf("Digite o raio do cilindro em centimetros: ");
    scanf("%d", &raio);

    int altura;
    printf("Digite a altura do mesmo cilindro em centimetros: ");
    scanf("%d", &altura);

    float area = 2 * PI * raio * altura;
    float volume = PI * (raio * raio) * altura;

    printf("A area do cilindro informado e de %.2f cm2.\n", area);
    printf("O volume do cilindro informado e de aproximadamente %.2f cm3.", volume);

    return 0;
}
