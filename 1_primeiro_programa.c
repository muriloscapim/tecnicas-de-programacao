#include <stdio.h>
#include <stdlib.h> // system("pause");

int main()
{
	int num = 10; // atribuindo valor para a variável
	float n2 = 6.79; // float é uma variável que possui casas decimais
	char letra = 'a';
	char frase[15] = "Boa noite!";
	double n3 = 1.23456; // precisão dupla, dobro do float
	
	int valor1, valor2, soma, sub, mult, div, mod;
	
	printf("Hello World!\n");
	printf("Exibindo um numero inteiro %d\n",num);
	printf("Exibindo um numero real %f\n",n2); // %.2f
	printf("Exibindo um caracter %c\n",letra);
	printf("%s\n",frase);
	printf("Exibindo uma variavel do tipo double %f\n", n3);
	printf("Valores: %d %f %c %s %f\n", num, n2, letra, frase, n3);
	
	printf("Digite um numero inteiro: ");
	scanf("%d",&valor1); // & significa endereço
	printf("Digite outro numero inteiro: ");
	scanf("%d",&valor2);
	//scanf("%d%d",&valor1,&valor2);
	
	// operadores aritméticos
	soma = valor1 + valor2;
	sub = valor1 - valor2;
	mult = valor1 * valor2;
	div = valor1 / valor2;
	mod = valor1 % valor2;
	
	printf("Valor da soma de %d + %d = %d\n",valor1, valor2, soma);
	printf("Valor da subtracao de %d - %d = %d\n",valor1, valor2, sub);
	printf("Valor da multiplicacao de %d * %d = %d\n",valor1, valor2, mult);
	printf("Valor da divisao de %d / %d = %d\n",valor1, valor2, div);
	printf("Valor do resto da divisao de %d %% %d = %d\n",valor1, valor2, mod);
	/* para imprimir o caracter % temos que
	repetir o símbolo duas vezes %% */
	
	system("pause"); // somente para windows
	return 0;
}
