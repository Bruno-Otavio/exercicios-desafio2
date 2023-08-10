#include <stdio.h>

int main() {
	int i;
	
	while (i != 10) {
		printf("Bartsimpson\n");
		i++;
	}
	
	i = 0;
	do {
		printf("Margesimpson\n");
		i++;
	}
	while (i != 10);
	
	for (i = 0; i != 10; i++) {
		printf("Homersimpson\n");
	}
	
	return 0;
}
