#include <stdio.h>

/*
    Desenvolva um algortimo que faça o cálculo do reajuste salarial de um funcionário, baseado nos seguintes parâmetros:
    15% de aumento : 1.500,00 <= salario Atual < 1.750,00
    12% de aumento : 1.750,00 <= salario Atual < 2.000,00
    9% de aumento : 2.000,00 <= salario Atual < 3.000,00
    6% de aumento : salario Atual >= 3.000,00
*/

int main() {
    float salary, reajust;
    printf("Digite a seguir o valor do seu salario: R$");
    scanf("%f", &salary);

    float result;

    if (1750 > salary && salary >= 1500)
        reajust = 15;
    else if (2000 > salary && salary >= 1750)
        reajust = 12;
    else if (3000 > salary && salary >= 2000)
        reajust = 9;
    else if (salary >= 3000)
        reajust = 6;

    result = (1.0 + reajust / 100) * salary;

    printf("O seu novo salario apos o reajuste de %.2f porcento e de R$%.2f", reajust, result);

    return 0;
}
