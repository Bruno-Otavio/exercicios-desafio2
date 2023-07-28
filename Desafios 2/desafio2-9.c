#include <stdio.h>

/*
    Desenvolva um programa que leia o nome e o preço de uma mercadoria.
    O programa deverá calcular um aumento de 5% no preço da mercadoria e mostrar o nome da mercadoria e o seu novo preço.
*/

int main() {
    const int percentual = 5; // 5% de reajuste

    char commodityName[15];
    printf("Digite o nome do produto a receber um reajuste de preco: ");
    fgets(commodityName, sizeof(commodityName), stdin);

    float price;
    printf("Digite o valor deste produto: ");
    scanf("%f", &price);

    float newPrice = (price * percentual / 100) + price;

    printf("O produto %sAgora custa R$%.2f com o reajuste de valor.", commodityName, newPrice);

    return 0;
}
