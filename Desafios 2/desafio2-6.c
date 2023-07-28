#include <stdio.h>

/*
    Sabendo-se que a velocidade de cruzeiro de um avião 747-300 é de 900 km/h,
    faça um programa que leia uma distância (km), calcule e apresente na tela,
    quanto tempo (horas) será necessário para um 747-300 sobrevoar a distância informada.
*/

int main() {
    const int PLANESPEED = 900;
    int distance;
    printf("Digite a distancia a ser percorrida pelo aviao: ");
    scanf("%d", &distance);

    int timeHours = distance / PLANESPEED;

    printf("O aviao ira percorrer uma distancia de %dkm em aproximadamente %d hora(s).", distance, timeHours);

    return 0;
}
