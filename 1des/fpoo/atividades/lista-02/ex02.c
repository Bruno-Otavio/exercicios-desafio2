#include <stdio.h>

/*
	Desenvolva um programa que leia o salário de um funcionário e o número de filhos.
	Se o salário for menor do que 2000 o funcionário receberá um salário família equivalente a 45 reais por filho.
	Apresente o salário final.
*/

int main() {
	float salary;
	printf("Digite o seu salario: R$");
	scanf("%f", &salary);
	
	float numSon;
	printf("Digite a quantidade de filhos que voce tem: ");
	scanf("%f", &numSon);
	
	float result;
	
	if (salary < 2000) {
		result = salary + 45 * numSon;
		printf("O seu salario apos a adicao e de R$%.2f", result);
	}
	
	return 0;
}
