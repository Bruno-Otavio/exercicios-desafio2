#include <stdio.h>

int main() {
	int num;
	printf("Escreva um numero inteiro positivo diferente de zero: ");
	scanf("%d", &num);
	
	int result1 = num - 1;
	int result2 = num + 1;
	
	printf("%d - 1 = %d\n%d + 1 = %d", num, result1, num, result2);
	
	return 0;
}
