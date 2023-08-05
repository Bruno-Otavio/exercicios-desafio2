#include <stdio.h>

/*
    Desenvolva um programa que leia a velocidade de um carro (km/h) e a distância a ser percorrida (km) por ele.
    Calcule e apresente na tela, quanto tempo (horas) será necessário para o carro percorrer a distância informada.
*/

int main() {
    float speed;
    printf("Digite um valor inteiro da média de velocidade de um carro: ");
    scanf("%f", &speed);

    fint distance;
    printf("Digite um valor inteiro da distancia a ser percorrida por esse mesmo carro: ");
    scanf("%f", &distance);

    float time = distance / speed;
    printf("O carro a %.2fkm/h precisara de %.2f horas aproximadamente para percorrer %.2fkm.", speed, time, distance);

    return 0;
}
