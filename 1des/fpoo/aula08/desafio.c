#include <stdio.h>
#include <locale.h>

/*
	Desenvolva um programa que leia o nome de um vendedor
	e o montante de suas 5 ultimas vendas,
	imprima na tela o nome, os montantes,
	as comissões e os totais das vendas e comissões
*/

int main() {
	setlocale(LC_ALL, "");
	
	char name[15];
	printf("Digite o seu nome a seguir: ");
	scanf("%s", &name);
	
	float montants[5];
	float commissions[5];
	int arraySize = sizeof(montants) / sizeof(montants[0]);
	
	float totalMontants;
	float totalCommissions;
	
	int i;
	for (i = 0; i < arraySize; i++) {
		printf("Digite o valor do %d montante: R$", i+1);
		scanf("%f", &montants[i]);
		
		totalMontants += montants[i];
		
		if (montants[i] >= 4000) 
			commissions[i] = montants[i] * 6 / 100;
		else
			commissions[i] = montants[i] * 5 / 100;
		
		totalCommissions += commissions[i];
	}

	printf("Olá %s\nEsses são os preços dos montantes e sua comissão: \n", name);
	printf("Montants: \t Commissions:\n");
	
	for (i = 0; i < arraySize; i++) {
		printf("R$%4.2f \t R$%4.2f \n", montants[i], commissions[i]);
	}
	
	printf("Total da venda de montantes: R$%.2f\n", totalMontants);
	printf("Total de sua comissão: R$%.2f", totalCommissions);
	
	return 0;
}
