#include <stdio.h>
#include <locale.h>

/*
	Crie um programa em C que receba como entrada inicialmente o nome da cidade e quantos candidatos a prefeito esta possui.
	Em seguida solicite que o usuário digite o primeiro nome de cada candidato e o respectivo total de votos,
	O sistema deve retornar como saída se a eleição foi válida,
	qual a porcentagem de votos de cada candidato,
	qual candidato foi eleito ou se houver segundo turno,
	quais dois candidatos que o disputarão.
*/

int main() {
	setlocale(LC_ALL, "");

	char cityName[32];
	printf("Digite o nome da cidade: ");
	scanf("%s", &cityName);

	int totalCandidates;
	printf("Digite a quantidade de candidatos a prefeitos: ");
	scanf("%d", &totalCandidates);

	char names[totalCandidates][32];
	int candidatesVotes[totalCandidates];
	float result[totalCandidates], whiteResult;
	int totalVotes, whiteVotes, nullVotes;

    totalVotes = 0;

	int i;
	for (i = 0; i < totalCandidates; i++) {
		printf("\nDigite o nome do %d° candidato: ", i+1);
		scanf("%s", &names[i]);

		printf("Digite o total de votos do mesmo: ");
		scanf("%d", &candidatesVotes[i]);

		totalVotes += candidatesVotes[i];
	}
    printf("\nDigite a quantidade de votos em branco: ");
    scanf("%d", &whiteVotes);

	totalVotes += whiteVotes;

	printf("Digite a quantidade de votos nulos: ");
	scanf("%d", &nullVotes);

	if (totalVotes < nullVotes) {
		printf("\nEleição inválida.\n");
		return 0;
	}

	for (i = 0; i < totalCandidates; i++) {
		result[i] = candidatesVotes[i] * 100 / (float)totalVotes;
		whiteResult = whiteVotes * 100 / (float)totalVotes;
	}

    int first = 0;
	int second = 0;
	for (i = 0; i < totalCandidates; i++) {
        if (result[i] > result[first])
            first = i;
	}
	for (i = 0; i < totalCandidates; i++) {
        if (i != first && result[i] > result[second])
            second = i;
	}

	printf("\nEleição válida.\n");

	printf("\nVots válidos: %d \n", totalVotes);
	printf("Votos inválidos: %d \n", nullVotes);

	printf("\nCandidato \t Porcentagem\n");
	for (i = 0; i < totalCandidates; i++) {
		printf("%s \t %.2f\n", names[i], result[i]);
	}
	printf("Brancos \t %.2f\n", whiteResult);

	if (totalVotes > 200000 && candidatesVotes[first] < (totalVotes / 2 + 1))
		printf("\nHaverá segundo turno entre %s e %s\n", names[first], names[second]);
	else {
		printf("\nNão haverá segundo turno.\n");
		printf("O candidato %s venceu com %.2f porcento dos votos.\n", names[first], result[second]);
	}

	return 0;
}
