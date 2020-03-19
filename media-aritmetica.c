// Calcular a média aritmética entre dois números
#include <stdio.h>
#include <stdlib.h> // system("pause");

int main()
{
	// declaração das variáveis
	float nota1, nota2, media;

	printf("Digite a primeira nota: ");
	scanf("%f",&nota1);
	printf("Digite a segunda nota: ");
	scanf("%f",&nota2);

	media = (nota1 + nota2) / 2;
	
	// %.1f mostra a média com uma casa decimal
	printf("Media: %.1f",media);
	system("pause");
	return 0;
}