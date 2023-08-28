#include <stdio.h>

/*
	Crie um programa em C que receba como entrada inicialmente o nome da cidade e quantos candidatos a prefeito esta possui.
	Em seguida solicite que o usuário digite o primeiro nome de cada candidato e o respectivo total de votos,
	O sistema deve retornar como saída se a eleição foi válida,
	qual a porcentagem de votos de cada candidato,
	qual candidato foi eleito ou se houver segundo turno,
	quais dois candidatos que o disputarão.
*/

int main() {
	char cityName[32];
	printf("Digite o nome da cidade: ");
	scanf("%s", &cityName);
	
	int totalCandidates;
	printf("Digite a quantidade de candidatos a prefeitos: ");
	scanf("%d", &totalCandidates);
	
	char names[totalCandidates][32];
	char candidatesVotes[totalCandidates];
	int totalVotes, result[totalCandidates];
	
	int i;
	for (i = 0; i < totalCandidates; i++) {
		printf("Digite o nome do %dº candidato(a): ");
		scanf("%s", &names[i]);
		
		printf("Digite o total de votos do mesmo: ");
		scanf("%d", &candidatesVotes[i]);
		
		totalVotes += candidatesVotes[i];
	}
	
	for (i = 0; i < totalCandidates; i++) {
		result[i] = 
	}
	
	return 0;
}
