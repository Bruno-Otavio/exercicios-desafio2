#include <stdio.h>
#include <string.h>
#include <locale.h>

/*
    Desenvolva um programa que leia o nome de 5 times de futebol,
    o número de vitórias e o número de empates de cada time.
    O programa deverá calcular e apresentar na tela, o nome dos times
    e o total de pontos de cada um e a ordem de classificação decrescente.
    Lembrando que a vitória vale 3 pontos e o empate vale 1 ponto.
*/

int main() {
    setlocale(LC_ALL, "");

    char teams[5][32];
    int points[5];
    int victory, draw;

    int i, j;
    for (i = 0; i < 5; i++) {
        points[i] = 0;

        printf("Digite o nome do %d° time: ", i+1);
        scanf("%s", &teams[i]);

        printf("Vitórias: ");
        scanf("%d", &victory);

        printf("Empates: ");
        scanf("%d", &draw);

        points[i] += victory * 3 + draw;
    }

    char tempName[32];
    int pos, tempPoint;
    for (i = 0; i < 5; i++) {
        pos = i;
        for (j = i; j < 5; j++) {
            if (points[j] > points[pos])
                pos = j;
        }
        tempPoint = points[i];
        points[i] = points[pos];
        points[pos] = tempPoint;

        strcpy(tempName, teams[i]);
        strcpy(teams[i], teams[pos]);
        strcpy(teams[pos], tempName);
    }

    printf("\nPosição dos times inseridos: \n");
    printf("   Time \t Pontos\n");
    for (i = 0; i < 5; i++) {
        printf("%d° %s \t %d\n", i+1, teams[i], points[i]);
    }

    return 0;
}
