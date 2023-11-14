#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char decision;
    char computer;
    char options[] = "RPS";

    int points = 0;

    printf("(R)ock | (P)aper | (S)cissors - ");
    scanf("%c", &decision);

    srand(time(0));

    computer = options[(rand() % 2)];

    if (decision == 'R' && computer == 'S') {
        printf("You Win!");
        points++;
    } else if (decision == 'S' && computer == 'R')  {
        printf("You Lose!");
    } else if (decision == 'P' && computer == 'R') {
        printf("You Win!");
        points++;
    } else if (decision == 'R' && computer == 'P') {
        printf("You Lose!");
    } if (decision == 'S' && computer == 'P') {
        printf("You Win!");
        points++;
    } else if (decision == 'P' && computer == 'S') {
        printf("You Lose!");
    } else if (decision == computer) {
        printf("Draw!");
    }

    return 0;
}