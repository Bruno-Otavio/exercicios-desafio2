#include <stdio.h>

/*
	Desenvolva um programa que leia o preço de um produto e se o preço
	for maior do que 1000 reais aplique um desconto de 8%. Mostre o preço final.
*/

int main() {
	const float discount = 8; // Desconto de 8%
	float price;
	printf("Para verificar se o seu produto e elegivel a desconto...\nDigite o valor do produto: R$");
	scanf("%f", &price);
	
	float result; // Caso não seja maior que 1000, não haverá processo.
	
	if (price > 100) {
		result = price - price * discount / 100;
		printf("O novo valor com o disconto aplicado e de R$%.2f", result);
	}
		
	return 0;
}
