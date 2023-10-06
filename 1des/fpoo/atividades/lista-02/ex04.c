#include <stdio.h>

/*
	Desenvolva um programa que leia os valores de três lados de um triângulo (a, b e c)
	e se os três lados forem diferentes escreva ESCALENO 
	se os três lados forem iguais EQUILÁTERO
	e se apenas dois lados forem iguais ISÓSCELES
*/

int main() {
	int a, b, c;
	printf("Escreva o valor dos lados do triangulo separados por espaco: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a != b && a != c && b != c) {
		printf("todos diferentes");
		
	} else if (a == b == c) {
		printf("Equilatero %d %d %d", a, b, c);
		
	} else if (a == b || a == c || b == c) {
		printf("Isoceles %d %d %d", a, b, c);
	}
	
	
	return 0;
}
