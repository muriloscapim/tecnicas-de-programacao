/*
Faça um programa que receba o peso de uma pessoa em quilos, calcule e 
mostre esse peso em gramas
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float peso, gramas;

	printf("Informe o peso em quilos: ");
	scanf("%f", &peso);

	// 1 quilo = 1000 gramas
	gramas = peso * 1000;

	printf("O peso em gramas e: %.2f \n",gramas);
	system("pause");
	return 0;
}