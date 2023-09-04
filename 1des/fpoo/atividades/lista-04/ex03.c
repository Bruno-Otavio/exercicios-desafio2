#include <stdio.h>
#include <locale.h>

/*
    Desenvolva um programa que leia o nome e o preço de 5 mercadorias.
    Se o preço for menor do que 1000 terá um aumento de 5% no preço da mercadoria,
    senão o aumento será de 7%. Mostrar o nome das mercadorias e o seu novo preço.
*/

int main() {
    setlocale(LC_ALL, "");

    char names[5][32];
    float prices[5];

    int i;
    for (i = 0; i < 5; i++) {
        printf("Digite o nome do %d° produto: ", i+1);
        scanf("%s", &names[i]);

        printf("O preço do mesmo produto: R$");
        scanf("%f", &prices[i]);

        if (prices[i] < 1000)
            prices[i] = prices[i] * 5 / 100 + prices[i];
        else
            prices[i] = prices[i] * 7 / 100 + prices[i];
    }

    printf("\nMercadorias após o reajuste: \n");
    printf("Produto \t Preço(R$) \n");
    for (i = 0; i < 5; i++)
        printf("%s \t\t %02.2f\n", names[i], prices[i]);

    return 0;
}
