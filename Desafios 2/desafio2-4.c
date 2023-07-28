#include <stdio.h>

/*
    Desenvolva um programa que leia o nome de um time de futebol, o número de vitórias e o número de empates.
    O programa deverá calcular e apresentar na tela, o nome do time e o total de pontos.
    Lembrando que a vitória vale 3 pontos e o empate vale 1 ponto.
*/

int main() {
    char clubName[15];
    printf("Digite o nome do time do futebol desehado: ");
    fgets(clubName, sizeof(clubName), stdin);

    int numVictory;
    printf("Digite a quantidade de vitorias que esse time teve: ");
    scanf("%d", &numVictory);

    int numDraw;
    printf("Digite a quantidade de empates que esse time teve: ");
    scanf("%d", &numDraw);

    int totalPoints = numVictory * 3 + numDraw;

    printf("O time %s\nEsta com %d vitorias e %d empatas resultando em %d pontos.", clubName, numVictory, numDraw, totalPoints);

    return 0;
}
