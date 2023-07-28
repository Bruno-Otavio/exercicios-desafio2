#include <stdio.h>

/*
    Desenvolva um programa que leia o nome de uma cidade,
    o número total de eleitores e o número total de votos apurados na última eleição.
    O programa deverá calcular e exibir a porcentagem de participação dos eleitores desta cidade na última eleição.
*/

int main() {
    char cityName[15];
    printf("Digite o nome da cidade: ");
    fgets(cityName, sizeof(cityName), stdin);

    int totalParticipants;
    printf("Digite o numero total de eleitores: ");
    scanf("%d", &totalParticipants);

    int totalVotes;
    printf("Digite o numero total de votos apurados: ");
    scanf("%d", &totalVotes);

    float totalApurado = totalVotes * 100 / totalParticipants;

    printf("Da cidade de %sUm total de aproximadamente %.2f porcento de todos os cidadaos participaram dos votos.", cityName, totalApurado);

    return 0;
}
