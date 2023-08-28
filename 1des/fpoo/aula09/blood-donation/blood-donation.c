#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
	Crie um programa que receba/solicite ao usu�rio como entrada o n�mero total de doadores,
	em seguida pe�a os nomes, idade, sexo 'M' ou 'F' e o n�mero de dias desde a �ltima doa��o de sangue.
	O programa deve ter como sa�da a lista com os nomes e status "apto" ou "inapto" a doar sangue novamente.
	Lembrando que o tempo m�nimo entre as doa��es para homens � de 60 dias e mulheres 90 dias.
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
		printf("\nDigite a seguir o nome do %d� doador: ", i+1);
		scanf("%s", &names[i]);
		
		printf("Insira a idade do mesmo: ");
		scanf("%d", &ages[i]);
		
		printf("Insira o genero do mesmo, (M)Masculino - (F)Feminino - (O)Outros: ");
		scanf("%s", &genders[i]);
		
		printf("Insira a �ltima doa��o do paciente em dias: ");
		scanf("%d", &lastDonations[i]);
	}
	
	for (i = 0; i < totalDonators; i++) {
		printf("\nInforma��es do %d� paciente: \n", i+1);
		printf("\nNome: %s\n", names[i]);
		printf("Idade: %d \n", ages[i]);
		printf("G�nero: %c \n", genders[i]);
		
		if (genders[i] == 'M' && lastDonations[i] >= 60 || lastDonations[i] == 0 && ages[i] >= 16 && ages[i] <= 69)
			printf("Status: Apto para a doa��o. \n");
			
		else if (genders[i] == 'F' && lastDonations[i] >= 90 || lastDonations[i] == 0 && ages[i] >= 16 && ages[i] <= 69)
			printf("Status: Apto para a doa��o. \n");
			
		else if (genders[i] == 'O' && lastDonations[i] >= 90 || lastDonations[i] == 0 && ages[i] >= 16 && ages[i] <= 69)
			printf("Status: Apto para a doa��o. \n");
			
		else
			printf("Status: Inapto para a doa��o. \n");
	}
	
	return 0;
}
