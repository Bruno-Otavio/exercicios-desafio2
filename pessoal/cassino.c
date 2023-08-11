#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float checksAndUpdateValue(float bet, float total, char* msg) {
	char message[256];
	strcpy(message, msg);
	char *messageP = message;

	float moneyBet = bet;
	float totalMoney = total;

	while (moneyBet > totalMoney) {
		printf("Valor invalido, tente novamente.\n");
		printf("%s", messageP);
		scanf("%f", &moneyBet);
	}
	return moneyBet;
}

int main()
{
	float money, moneyBet, multiplier, result;
	int dice, numberBet;
	
	printf("Bem-Vindo ao cassino da Blaze!\n");
	
	printf("Digite a quantidade de dinheiro a ser inserida: R$");
	scanf("%f", &money);
	
	srand(time(0));
	
	multiplier = 1.25;

	while (money != 0) {
		printf("========================================================\n");
		dice = (rand() % 6) + 1;
	
		printf("Digite a quantidade que voce quer apostar: R$");
		scanf("%f", &moneyBet);	
		moneyBet = checksAndUpdateValue(moneyBet, money, "Digite a quantidade que voce quer apostar: R$");
		
		printf("Agora, digite o numero que voce acredita que o dado de 6 lados ira cair: ");
		scanf("%d", &numberBet);
		numberBet = checksAndUpdateValue(numberBet, 6.0, "Digite o numero que voce acredita que o dado de 6 lados ira cair: ");
		
		printf("O dado caiu no numero %d.\n", dice);
		if (numberBet == dice) {
			result = money * multiplier;
			money += result;
			
			printf("Voce ganhou R$%.2f!!\n", result);
			printf("Seu dinheiro foi muliplocado em %.2fx, resultando em R$%.2f.\n", multiplier, money);
		} else {
			printf("Voce perdeu.\n");
			printf("Foi retirado R$%.2f do seu saldo total do cassino.\n", moneyBet);
			
			money -= moneyBet;
		}
		printf("Saldo total: R$%.2f.\n", money);
		
		multiplier += 0.05;
		printf("O multiplicador aumentou em 0.5%!.\n");
	}
	
	printf("Voce perdeu todo o seu dinheiro, volte outro dia.");
	
	return 0;
}
