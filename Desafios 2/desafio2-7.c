#include <stdio.h>

/*
    Um caminhão consegue transportar 18 toneladas de laranjas em uma viagem que faz entre
    a fazenda e a fábrica de suco de laranja. Um alqueire de terra produz em média 250 toneladas de laranjas.
    Faça um programa que leia quantos caminhões e quantos alqueires uma fazenda produtora de laranjas possui,
    calcule e apresente na tela quantas viagens de caminhão serão necessárias para transportar toda a colheita de laranjas.
*/

int main() {
    const int TRUCKCARGO = 18; // 18 Toneladas
    const int FARMPRODUCTION = 250; // 250 Toneladas

    int numFarm;
    printf("Digite a quantidade de fazendas produtoras de laranjas: ");
    scanf("%d", &numFarm);

    int numTruck;
    printf("Digite a quantidade de caminhoes para o transporte: ");
    scanf("%d", &numTruck);

    int totalTravel = (FARMPRODUCTION * numFarm) / (TRUCKCARGO * numTruck);

    printf("Sera necessario %d viagens de %d caminhoes para transportar todas as laranjas.", totalTravel, numTruck);

    return 0;
}
