#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
	Crie um programa que receba/solicite ao usuário como entrada o número total de doadores,
	em seguida peça os nomes, idade, sexo 'M' ou 'F' e o número de dias desde a última doação de sangue.
	O programa deve ter como saída a lista com os nomes e status "apto" ou "inapto" a doar sangue novamente.
	Lembrando que o tempo mínimo entre as doações para homens é de 60 dias e mulheres 90 dias.
*/

int main() {
	setlocale(LC_ALL, "");
	
	int totalDonators;
	do {
		printf("Digite o total de doadores: ");
		scanf("%d", &totalDonators);
	} while (totalDonators > 500);
	
	char names[totalDonators][32], genders[totalDonators];
	int ages[totalDonators], lastDonations[totalDonators];

	int i;
	for (i = 0; i < totalDonators; i++) {
		printf("\nDigite a seguir o nome do %dº doador: ", i+1);
		scanf("%s", &names[i]);
		
		printf("Insira a idade do mesmo: ");
		scanf("%d", &ages[i]);
		
		printf("Insira o genero do mesmo, (M)Masculino - (F)Feminino - (O)Outros: ");
		scanf("%s", &genders[i]);
		
		printf("Insira a última doação do paciente em dias: ");
		scanf("%d", &lastDonations[i]);
	}
	
	for (i = 0; i < totalDonators; i++) {
		printf("\nInformações do %dº paciente: \n", i+1);
		printf("\nNome: %s\n", names[i]);
		printf("Idade: %d \n", ages[i]);
		printf("Gênero: %c \n", genders[i]);
		
		if (genders[i] == 'M' && lastDonations[i] >= 60 || lastDonations[i] == 0 && ages[i] >= 16 && ages[i] <= 69)
			printf("Status: Apto para a doação. \n");
			
		else if (genders[i] == 'F' && lastDonations[i] >= 90 || lastDonations[i] == 0 && ages[i] >= 16 && ages[i] <= 69)
			printf("Status: Apto para a doação. \n");
			
		else if (genders[i] == 'O' && lastDonations[i] >= 90 || lastDonations[i] == 0 && ages[i] >= 16 && ages[i] <= 69)
			printf("Status: Apto para a doação. \n");
			
		else
			printf("Status: Inapto para a doação. \n");
	}
	
	return 0;
}
