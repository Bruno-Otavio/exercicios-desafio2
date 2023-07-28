#include <stdio.h>

/*
    Desenvolva um programa que leia a velocidade de um carro (km/h) e a distância a ser percorrida (km) por ele.
    Calcule e apresente na tela, quanto tempo (horas) será necessário para o carro percorrer a distância informada.
*/

int main() {
    int speed;
    printf("Digite um valor inteiro da média de velocidade de um carro: ");
    scanf("%d", &speed);

    int distance;
    printf("Digite um valor inteiro da distancia a ser percorrida por esse mesmo carro: ");
    scanf("%d", &distance);

    int time = distance / speed;
    printf("O carro a %dkm/h precisara de %d horas aproximadamente para percorrer %dkm.", speed, time, distance);

    return 0;
}
