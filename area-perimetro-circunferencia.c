#include <stdio.h>

int main()
{
	float raio, perimetro;
	double pi = 3.1415927, area;

	printf("Introduza o raio da circunferência: ");
	scanf("%f", &raio);
	area = pi * raio * raio;
	perimetro = 2 * pi * raio;

	printf("Area = %.2f\nPerimetro = %.2f\n",area,perimetro);
}