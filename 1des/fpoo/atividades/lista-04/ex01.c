#include <stdio.h>
#include <string.h>
#include <locale.h>

/*
    Desenvolva um programa que leia o nome e o salário de 5 pessoas,
    depois leia um valor de índice percentual (%) de reajuste do salário.
    Calcule e apresente na tela, o valor do novo salário e o nome das 5 pessoas.
*/

int main() {
    setlocale(LC_ALL, "");

    char names[5][32];
    char name[64];
    float salaries[5];
    float percentualIndex;
    float result;
    
    int i;
    for (i = 0; i < 5; i++) {
        printf("Digite o %d nome a seguir: ", i+1);
        fgets(name, sizeof(name), stdin);
        strcpy(names[i], name);

        printf("Digite o salario desta mesma pessoa: R$");
        scanf("%f", salaries[i]);
    }

    printf("Agora digite o valor do índice de reajuste: ");
    scanf("%f", &percentualIndex);

    for (i = 0; i < 5; i++) {
        result = salaries[i] + (salaries[i] * percentualIndex / 100);
        salaries[i] = result;
    }

    printf("Esses sãos os salários após o reajuste: ");
    for (i = 0; i < 5; i++) {
        printf("\n%s: R$%.2f", names[i], salaries[i]);
    }

    return 0;
}
