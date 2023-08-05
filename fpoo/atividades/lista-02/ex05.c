#include <stdio.h>

/*
    Desenvolva um programa que leia o nome e o preço de uma mercadoria.
    Se o preço for menor do que 1000 terá um aumento de 5% no preço da mercadoria, senão o aumento será de 7%.
    Mostrar o nome da mercadoria e o seu novo preço.
*/

int main() {
    char prdctName[30];
    printf("Digite o Nome da sua mercadoria: ");
    fgets(prdctName, sizeof(prdctName), stdin);

    float price;
    printf("Digite o preco dessa mercadoria: R$");
    scanf("%f", &price);

    float result;

    if (price < 1000) {
        result = price + price * 5 / 100;
        printf("A mercadoria %sSofreu um reajuste de 5 porcento e agora custa R$%.2f.", prdctName, result);
    } else  {
        result = price + price * 7 / 100;
        printf("A mercadoria %sSofreu um reajuste de 7 porcento e agora custa R$%.2f", prdctName, result);
    }

    return 0;
}
