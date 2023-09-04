#include <stdio.h>
#include <locale.h>

/*
    Desenvolva um programa que leia o nome e o salário de 5 pessoas,
    depois leia um valor de índice percentual (%) de reajuste do salário.
    Calcule e apresente na tela, o valor do novo salário e o nome das 5 pessoas.
*/

int main() {
    setlocale(LC_ALL, "");

    char names[5][32];
    float salaries[5];
    float percentIndex;
    float result;

    printf("Calculo de reajuste salarial.\n");

    int i;
    for (i = 0; i < 5; i++) {
        printf("\nDigite o %d° nome a seguir: ", i+1);
        scanf("%s", &names[i]);

        printf("Digite o salario desta mesma pessoa: R$");
        scanf("%f", &salaries[i]);
    }

    printf("\nAgora digite o valor do índice de reajuste: ");
    scanf("%f", &percentIndex);

    printf("\nReajustes a seguir: \n");
    printf("Nomes \t Salários\n");
    for (i = 0; i < 5; i++) {
        result = salaries[i] * percentIndex / 100.0f + salaries[i];
        salaries[i] = result;
        printf("%s \t R$%.2f\n", names[i], salaries[i]);
    }

    return 0;
}
