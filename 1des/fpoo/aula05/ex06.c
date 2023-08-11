#include <stdio.h>

int main() {
	int num;
	int pot;
	
	while (num != 4) {
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		pot = num * num;
		printf("O quadrado de %d e igual a %d\n", num, pot);
	}
		
	return 0;
}
