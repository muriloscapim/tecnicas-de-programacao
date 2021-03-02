#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c;
	a = 15;
	b = 10;
	c = 5;
	float x = 0;
	
	// * e / tem a mesma preced�ncia, executa da esquerda para direita
	x = a * b / c;
	printf("Expressao: a * b / c = %f\n", x);
	
	// divis�o inteira
	x = a / b * c;
	printf("Expressao: a / b * c = %f\n", x);
	
	// * tem preced�ncia maior que a +
	x = a + b * c;
	printf("Expressao: a + b * c = %f\n", x);
	
	x = a * b + c;
	printf("Expressao: a * b + c = %f\n", x);
	
	// preced�ncia dos par�nteses
	x = a * (b + c);
	printf("Expressao: a * (b + c) = %f\n", x);
	
	// * e / tem preced�ncia maior que a +
	x = b / c * a + b;
	printf("Expressao: b / c * a + b = %f\n", x);
	
	x = b / c * (a + b);
	printf("Expressao: x = b / c * (a + b) = %f\n", x);
	
	system("pause");
	return 0;
}
