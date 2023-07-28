#include <stdio.h>

int main() {
	float carSpeed;
	printf("Digite a volocidade do carro: ");
	scanf("%f", &carSpeed);
	
	float distance;
	printf("Digite a distancia a ser percorrida pelo carro: ");
	scanf("%f", &distance);
	
	float timeHours = distance / carSpeed;
	
	printf("O carro ira demorar %.2f horas para percorrer uma distancia de %.2fkm a uma velocidade de %.2fkm/h.", timeHours, distance, carSpeed);
	
	return 0;
}
