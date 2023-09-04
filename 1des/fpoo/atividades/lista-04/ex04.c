#include <stdio.h>
#include <locale.h>

/*
    Desenvolva um programa que leia o nome e o preço de 5 mercadorias,
    apresente na tela o mais caro e o mais barato.
*/

int main() {
    setlocale(LC_ALL, "");

    char names[5][32];
    float prices[5];

    int i, j;
    for (i = 0; i < 5; i++) {
        printf("Digite o nome do %d° produto: ", i+1);
        scanf("%s", &names[i]);

        printf("O preço do mesmo produto: R$");
        scanf("%f", &prices[i]);
    }

    int min, temp;
    for (i = 0; i < 5; i++) {
        min = i;
        for (j = i; j < 5; j++) {
            if (prices[j] < prices[min])
                min = j;
        }
        temp = prices[i];
        prices[i] = prices[min];
        prices[min] = temp;
    }

    printf("\nProduto mais barato: R$%.2f \n", prices[0]);
    printf("Produto mais caro: R$%.2f \n", prices[4]);

    return 0;
}
