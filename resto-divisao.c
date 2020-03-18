/*
Efetuar a leitura de um número inteiro e imprimir o resto da divisão deste
número por 2.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;

	printf("Informe um nro inteiro: ");
	scanf("%d",&n);

	int resto = n % 2;

	printf("\nO resto da divisao de %d por 2 e igual a: %d",n,resto);
	system("pause");
	return 0;
}