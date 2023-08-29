#include <stdio.h>
#include <locale.h>

/*
	Crie um programa em C que receba como entrada inicialmente o nome da cidade e quantos candidatos a prefeito esta possui.
	Em seguida solicite que o usu�rio digite o primeiro nome de cada candidato e o respectivo total de votos,
	O sistema deve retornar como sa�da se a elei��o foi v�lida,
	qual a porcentagem de votos de cada candidato,
	qual candidato foi eleito ou se houver segundo turno,
	quais dois candidatos que o disputar�o.
*/

int main() {
	setlocale(LC_ALL, "");
	
	char cityName[32];
	printf("Digite o nome da cidade: ");
	scanf("%s", &cityName);
	
	int totalCandidates;
	printf("Digite a quantidade de candidatos a prefeitos: ");
	scanf("%d", &totalCandidates);
	totalCandidates += 1;
	
	char names[totalCandidates-1][32];
	int candidatesVotes[totalCandidates];
	float result[totalCandidates];
	int totalVotes, nullVotes;
	
	int i;
	for (i = 0; i < totalCandidates-1; i++) {
		printf("\nDigite o nome do %d� candidato: ", i+1);
		scanf("%s", &names[i]);
	
		printf("Digite o total de votos do mesmo: ");
		scanf("%d", &candidatesVotes[i]);
		
		totalVotes += candidatesVotes[i];
	}
	printf("\nDigite o n�mero total de votos em branco: ");
	scanf("%d", &candidatesVotes[totalCandidates-1]);
	totalVotes += candidatesVotes[totalCandidates-1];

	printf("Digite a quantidade de votos nulos: ");
	scanf("%d", &nullVotes);
	
	if (totalVotes < nullVotes) {
		printf("\nElei��o inv�lida.");
		return 0;
	}
	
	for (i = 0; i < totalCandidates; i++) {
		result[i] = candidatesVotes[i] * 100 / totalVotes;
	}
	
	printf("\nElei��o v�lida.\n");
	
	printf("\nVots v�lidos: %d \n", totalVotes);
	printf("Votos inv�lidos: %d \n", nullVotes);
	
	printf("\nCandidato \t Porcentagem\n");
	for (i = 0; i < totalCandidates-1; i++) {
		printf("%s \t %.2f\n", names[i], result[i]);
	}
	printf("Brancos \t %.2f", result[totalCandidates-1]);
	
	for (i = 0; i < totalCandidates-1; i++) {
		if (result[i] > 50)
	}
	
	return 0;
}
