#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() 
{
	setlocale(LC_ALL, "");
	
	char name[32];
	float weight, height, imc; // Peso em quilogramas e altura em metros
	char decision[3] = "sim";
	
 	do {
		printf("\nDigite o seu primeiro nome a seguir: ");
		scanf("%s", &name);
		
		printf("Digite a seguir o seu peso em quilogramas: ");
		scanf("%f", &weight);
		
		printf("Digite a seguir a sua altura em metros: ");
		scanf("%f", &height);
		
		imc = weight / (height * height);
		
		if (imc <= 18.5) {
			printf("IMC de %.2f, abaixo do peso.\n", imc);
		} else if (imc > 18.5 && imc <= 24.9) {
			printf("IMC de %.2f, peso ideal, parabéns!\n", imc);
		} else if (imc > 24.9 && imc <= 29.9) {
			printf("IMC de %.2f, levemente acima do peso.\n", imc);
		} else if (imc > 29.9 && imc <= 34.9) {
			printf("IMC de %.2f, obesidade grau 1.\n", imc);
		} else if (imc > 34.9 && imc <= 39.9) {
			printf("IMC de %.2f, obesidade grau 2 (severa).\n", imc);
		} else if (imc > 40) {
			printf("IMC de %.2f, obesidade grau 3 (mórbida).\n", imc);
		}
		
		printf("Deseja continuar usando o programa? sim/não: ");
		scanf("%s", &decision);
	} 	while (strcmp(decision, "sim") == 0);
	
	return 0;
}
