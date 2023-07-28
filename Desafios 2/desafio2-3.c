#include <stdio.h>

/*
    Desenvolva um programa que leia o nome e o salário de uma pessoa,
    depois leia o valor do índice percentual (%) de reajuste do salário.
    Calcule e apresente na tela, o valor do novo salário e o nome da pessoa.
*/

int main() {
    char fullName[30];
    printf("Digite seu nome completo a seguir: ");
    fgets(fullName, sizeof(fullName), stdin);

    int salary;
    printf("Digite a seguir o valor inteiro do seu salário: ");
    scanf("%d", &salary);

    int percentual;
    printf("Digite a seguir o valor inteiro do percentual de reajuste do seu salario: ");
    scanf("%d", &percentual);

    int newSalary = (salary * percentual / 100) + salary;

    printf("Ola, %s\nCom o reajuste do seu salario de %d%, ele passou a ser de R$%d.", fullName, percentual, newSalary);

    return 0;
}
