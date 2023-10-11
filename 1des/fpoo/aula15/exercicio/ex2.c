#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1024
#define DATA_FILE_NAME "entrada.csv"

int countLines(char *filename) {
	FILE *file = fopen(filename, "r");
	
	char c;
	int lines = 0;
	
	if (file == NULL) {
		printf("Error - Couldn't open %s", filename);
		return -1;
	}
	
	lines++;
	while ((c=fgetc(file)) != EOF) {
		if (c == '\n')
			lines++;
	}
	
	fclose(file);
	return lines-1;
}

struct Person {
	int id;
	char name[32];
	char birthday[64];
};

int main() {
	FILE* data, output;
	
	char buffer[BUFFER_SIZE];
	
	int row = 0;
	int column = 0;

	int dataLines = countLines(DATA_FILE_NAME);

	struct Person people[dataLines];
	
	data = fopen(DATA_FILE_NAME, "r");
	
	if (data == NULL) {
		printf("Error - Couldn't open %s", DATA_FILE_NAME);
		return 1;
	}

	int i;
	while (fgets(buffer, sizeof(buffer), data)) {
		row++;
		
		if (row == 1)
			continue;	
		
		char *token = strtok(buffer, ";");
		
		for (i = 0; i < dataLines; i++) {
			people[i].id = 1;
			printf("%d", people[i].id);
		}
		
		column++;
		printf("\n");
	}	
	
	fclose(data);
	
	return 0;
}
