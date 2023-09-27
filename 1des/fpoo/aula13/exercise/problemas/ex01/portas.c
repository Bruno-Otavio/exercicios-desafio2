#include <stdio.h>
#include <locale.h>

#define BUFFER 100

int main() {
	setlocale(LC_ALL, "");
	
	FILE *data, *output;
	
	int doorState[BUFFER];
	int number, position;
	int i;
	
	for (i = 0; i < BUFFER; i++)
		doorState[i] = 0;
	
	data = fopen("portas.in.txt", "r");
	
	if (data == NULL) {
		printf("Error - Couldn't open the file");
		return 1;
	}
	
	while (fscanf(data, "%d", &number) == 1) {
		for (i = 0; i <= BUFFER; i++) {
			position = number * i;
			
			if (doorState[number-1])
				doorState[number-1] == 0;
			else
				doorState[number-1] == 1;
		}
	}
	
	printf("Estado das portas: ");
	for (i = 0; i < BUFFER; i++) {
		printf("%d", doorState[i]);
	}
	
//  Gera os valores de input do programa
//	FILE *input;
//	input = fopen("portas.in.txt", "w");
//	
//	if (input == NULL) {
//		printf("Error - Couldn't opoen the file");
//		return 1;
//	}
//	
//	int i;
//	for (i = 1; i <= 100; i++) {
//		fprintf(input, "%d\n", i);
//	}
//	
//	fclose(input);
	
	return 0;
}
