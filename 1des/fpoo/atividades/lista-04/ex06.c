#include <stdio.h>
#include <locale.h>

/*
	Desenvolva um programa que leia o nome e o pre�o de 10 mercadorias,
	depois leia o valor do �ndice percentual (%) de desconto no pre�o das mercadorias.
	Calcule e apresente na tela, o nome, o pre�o original, o valor do desconto e pre�o final (com o desconto) de cada mercadoria.
	Obs: � apenas uma porcentagem para todas as 10 mercadorias.
*/

int main() {
	setlocale(LC_ALL, "");
	
	char names[10][32];
	float prices[10], discounts[10], finalPrices[10], percentualIndex;
	
	printf("Calculo de desconto de mercadorias.\n");
	
	int i;
	for (i = 0; i < 10; i++) {
		printf("\nDigite o nome da %d� mercadoria: ", i+1);
		scanf("%s", &names[i]);
		
		printf("Agora, seu pre�o: R$");
		scanf("%f", &prices[i]);
	}
	
	printf("\nDigite agora o �ndice percentual a ser descontado: ");
	scanf("%f", &percentualIndex);
	
	printf("\nNome \t\t\t Pre�o Original(R$) \t Desconto(R$) \t Pre�o Final(R$)\n");
	for (i = 0; i < 10; i++) {
		discounts[i] = prices[i] * percentualIndex / 100.0f;
		finalPrices[i] = prices[i] - discounts[i];
		
		printf("%-15s \t %-15.2f \t %-10.2f \t %-5.2f\n", names[i], prices[i], discounts[i], finalPrices[i]);
	}
	
	return 0;
}
