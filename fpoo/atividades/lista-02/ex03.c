#include <stdio.h>

/*
	Desenvolva um programa que calcule desconto de INSS de um funcionário,
	se o salário for menor ou igual a do que R$ 1212,00 reais será de 7,5%,
	se estiver entre R$ 1212,01 e 2427,35 será de 9%,
	se estiver entre R$ 2427,36 e R$ 3641,03 o desconto é 12%
	se estiver entre R$ 3641,04 a R$ 7087,22 será de 14% e 
	se for maior do que 7087,22 o teto que é o máximo cobrado 14% de 7087,22.
	Mostre o desconto e o valor do salário final.
*/

int main() {
	float salary;
	printf("Para realizar o calculo do INSS...\nDigite o valor do seu salario: R$");
	scanf("%f", &salary);
	
	float result;
	
	if (salary <= 1212) {
		result = salary - salary * 7.5 / 100;
		printf("Com um desconto de 7.5 porcento, o seu novo salario e de R$%.2f", result);
		
	} else if (salary > 1212 && salary <= 2427.35) {
		result = salary - salary * 9 / 100;
		printf("Com um desconto de 9 porcento, o seu novo salario e de R$%.2f", result);
		
	} else if (salary > 2427.35 && salary <= 3641.03) {
		result = salary - salary * 12 / 100;
		printf("Com um desconto de 12 porcento, o seu novo salario e de R$%.2f", result);
		
	} else if (salary > 3641.03 && salary <= 7087.22) {
		result = salary - salary * 14 / 100;
		printf("Com um desconto de 14 porcento, o seu novo salario e de R$%.2f", result);
		
	} else if (salary > 7087.22) {
		result = salary - salary * 14 / 100;
		printf("Com o desconto maximo de 14 porcento, o seu novo salario e de R$%.2f", result);
		
	}
	
	return 0;
}
