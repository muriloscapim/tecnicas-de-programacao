// Calcular a m�dia aritm�tica entre dois n�meros
#include <stdio.h>
#include <stdlib.h> // system("pause");

int main()
{
	// declara��o das vari�veis
	float nota1, nota2, media;

	printf("Digite a primeira nota: ");
	scanf("%f",&nota1);
	printf("Digite a segunda nota: ");
	scanf("%f",&nota2);

	media = (nota1 + nota2) / 2;
	
	// %.1f mostra a m�dia com uma casa decimal
	printf("Media: %.1f",media);
	system("pause");
	return 0;
}
