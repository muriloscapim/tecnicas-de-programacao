/* Escreva um programa em C que peça ao usuário dois inteiros e
apresente o resultado da realização das operações aritméticas tradicionais
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1, num2;

	printf("Digite um numero: ");
	scanf("%d",&num1);
	printf("Digite outro numero: ");
	scanf("%d",&num2);
	//scanf("%d%d",&num1,&num2);
	printf("%d + %d = %d\n",num1,num2,num1+num2);
	printf("%d - %d = %d\n",num1,num2,num1-num2);
	printf("%d * %d = %d\n",num1,num2,num1*num2);
	printf("%d / %d = %d\n",num1,num2,num1/num2);
	printf("%d %% %d = %d\n",num1,num2,num1%num2);
	/* para imprimir o caracter % temos que
	repetir o símbolo duas vezes %% */
    system("pause");
	return 0;
}