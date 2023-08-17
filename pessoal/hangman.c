#include <stdio.h>

int main()
{
	int lives = 6;
	char wrongLetters[lives];
	
	int i;
	
	for (i = 0; i < lives; i++) {
		wrongLetters[i] = "a";
	}
	
	int decision = 1;
	while (decision || lives > 0) {
		for (i = 0; i < 6; i++) {
			printf("%c - ", wrongLetters[i]);
		}
	}
	
	return 0;
}
