#include <stdio.h>

/*
	Desenvolva um programa que leia o sal�rio de um funcion�rio e o n�mero de filhos.
	Se o sal�rio for menor do que 2000 o funcion�rio receber� um sal�rio fam�lia equivalente a 45 reais por filho.
	Apresente o sal�rio final.
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
