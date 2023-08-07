#include <stdio.h>

/*
    Uma loja está fazendo uma promoção e precisa de ajuda no momento da venda, para liberar os descontos.
    Baseado na peça, calcule o desconto e exiba o valor final da venda.
    camisa - 20% de desconto, bermuda - 10% de desconto, calça - 15% de desconto).
*/

int main() {
    int product;
    printf("Digite o produto a seguir, (1)Camisa, (2)Bermuda, (3)Calca: ");
    scanf("%d", &product);

    float price;
    printf("Digite o preco do produto: R$");
    scanf("%f", &price);

    float discount, result;

    if (product == 1)
        discount = 20;
    else if (product == 2)
        discount = 10;
    else if (product == 3)
        discount = 15;

    result = (1.0 - discount / 100) * price;
    printf("Apos %.2f porcento de desconto o seu produto passou a custar R$%.2f", discount, result);

    return 0;
}
